import java.io.*;
import java.util.*;

class Course implements Serializable {
	private int id;
	private String name;
	private Lecturer[] lecturers;
	private Student[] students;
	
	public Course(int i, String n, Lecturer[] l, Student[] s) {
		id = i;
		name = n;
		lecturers = l;
		students = s;
	}

	public void setId(int id) {
		this.id = id;	
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getId() {
		return this.id;
	}

	public String getName() {
		return this.name;
	}
}

class Lecturer implements Serializable {
	private int id;
	private String name;

	public Lecturer(int i, String n) {
		id = i;
		name = n;
	}

	public void setId(int id) {
		this.id = id;	
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getId() {
		return this.id;
	}

	public String getName() {
		return this.name;
	}
}

class Student implements Serializable {
	private int id;
	private String name;
	private float midtermMark;
	private float finalMark;

	public Student(int i, String n, float mm, float fm) {
		id = i;
		name = n;
		midtermMark = mm;
		finalMark = fm;
	}

	public void setId(int id) {
		this.id = id;	
	}

	public void setName(String name) {
		this.name = name;
	}

	public void setMidtermMark(float mm) {
		this.midtermMark = mm;
	}

	public void setFinalMark(float fm) {
		this.finalMark = fm;
	}

	public int getId() {
		return this.id;
	}

	public String getName() {
		return this.name;
	}

	public float getMidtermMark() {
		return this.midtermMark;
	}

	public float getFinalMark() {
		return this.finalMark;
	}
}

class Problem02 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Input number of courses: ");
		int courseNumber = sc.nextInt();
		Course[] courses = new Course[courseNumber];
		for (int i = 0; i < courseNumber; i++) {
			int displayNumber = i + 1;
			System.out.println("Course #" + displayNumber + ": ");
			System.out.print("- ID: ");
			int courseId = sc.nextInt();
			System.out.print("- Name: ");
			String courseName = sc.next();

			System.out.println("Input number of lecturers for Course #" + displayNumber + ": ");
			int lecturerNumber = sc.nextInt();
			Lecturer[] lecturers = new Lecturer[lecturerNumber];
			for (int j = 0; j < lecturerNumber; j++) {
				int lectureDisplayNumber = j + 1;
				System.out.println("Lecturer #" + lectureDisplayNumber + ": ");
				System.out.print("- ID: ");
				int lecturerId = sc.nextInt();
				System.out.print("- Name: ");
				String lecturerName = sc.next();

				lecturers[j] = new Lecturer(lecturerId, lecturerName);
			}

			System.out.println("Input number of students for Course #" + displayNumber + ": ");
			int studentNumber = sc.nextInt();
			Student[] students = new Student[studentNumber];
			for (int k = 0; k < studentNumber; k++) {
				int studentDisplayNumber = k + 1;
				System.out.println("Student #" + studentDisplayNumber + ": ");
				System.out.print("- ID: ");
				int studentId = sc.nextInt();
				System.out.print("- Name: ");
				String studentName = sc.next();
				System.out.print("- Midterm mark: ");
				float midtermMark = sc.nextFloat();
				System.out.print("- Final mark: ");
				float finalMark = sc.nextFloat();

				students[k] = new Student(studentId, studentName, midtermMark, finalMark);
			}

			courses[i] = new Course(courseId, courseName, lecturers, students);
		}

		try {
			FileOutputStream fout = new FileOutputStream(args[0]);
			ObjectOutputStream out = new ObjectOutputStream(fout);

			out.close();
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
}
