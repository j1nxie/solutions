#include <stdio.h>
#include <string.h>

#define NB_DISK_PAGE 5
#define PAGE_SIZE 20
#define NB_MEM_PAGE 4

#define boolean int
#define true 1
#define false 0

char Disk[NB_DISK_PAGE][PAGE_SIZE];
char Memory[NB_MEM_PAGE][PAGE_SIZE];
int PageTable[NB_DISK_PAGE];
struct {
	boolean free;
	int date;
	int npage;
} MemState[NB_MEM_PAGE];

int Date = 1;

void init();
char *memory_read(int npage);
int memory_alloc();
void page_fault(int npage);
int lru_select();

void init() {
	int i;

	// initialize Disk
	for (i = 0; i < NB_DISK_PAGE; i++) {
		strcpy(Disk[i], "page");
		Disk[i][4] = '0'+i;
		Disk[i][5] = 0;
	}

	// initialize Memory
	for (i = 0; i < NB_MEM_PAGE; i++)
		MemState[i].free = true;

	// initialize PageTable
	for (i = 0; i < NB_DISK_PAGE; i++)
		PageTable[i] = -1;
}


char *memory_read(int npage) {
	printf("memory_read (%d)\n", npage);
	if (PageTable[npage] == -1) {
		page_fault(npage);
	}
	MemState[PageTable[npage]].date = Date++;

	return Memory[PageTable[npage]];
}

int memory_alloc() {
	for (int i = 0; i < NB_MEM_PAGE; i++) {
		if (MemState[i].free == true) {
			MemState[i].free = false;
			printf("memory_alloc: %d\n", i);
			return i;
		}
	}

	return -1;
}

void page_fault(int vpage) {
	printf("page_fault (%d)\n", vpage);
	int rpage = memory_alloc();
	if (rpage == -1) {
		int selected_rpage = lru_select();
		int selected_vpage = MemState[selected_rpage].npage;
		PageTable[selected_vpage] = -1;
		memcpy(Disk[selected_vpage], Memory[selected_rpage], PAGE_SIZE);
		rpage = selected_rpage;
	}
	memcpy(Memory[rpage], Disk[vpage], PAGE_SIZE);
	PageTable[vpage] = rpage;
	MemState[rpage].npage = vpage;
}

int lru_select() {
	int min = MemState[0].date;
	int min_index = 0;
	for (int i = 1; i < NB_MEM_PAGE; i++) {
		if (MemState[i].date < min) {
			printf("lru_select: %d\n", i);
			min = MemState[i].date;
			min_index = i;
		}
	}

	return min_index;
}

int main(int argc, char *argv[]) {
	int i;
	printf("initialization\n");
	init();

	printf("access pages as in lecture (0, 1, 2, 3, 0, 1, 4, 0, 1, 2, 3, 4, 1, 2)\n");
	int serie[14] = {0, 1, 2, 3, 0, 1, 4, 0, 1, 2, 3, 4, 1, 2};
	for (i = 0; i < 14; i++) {
		printf("read access page %d: %s\n", serie[i], memory_read(serie[i]));
	}
	printf("completed\n");
	printf("print memory_state\n");
	for (i = 0; i < NB_MEM_PAGE; i++) {
		printf("%d ",MemState[i].npage);
	}
	printf("\n");
	printf("completed\n");
}
