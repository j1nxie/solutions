public class Deal {
    public static void main(String[] args) {
        int numberOfCards = 5;

        int players = Integer.parseInt(args[0]);
        
        String[] suits = {
            "Clubs", "Diamonds", "Spades", "Hearts"
        };

        String[] cards = {
            "2", "3", "4", "5", "6", "7", "8", "9", "10",
            "Jack", "Queen", "King", "Ace"
        };

        if (players * numberOfCards > 52) {
            throw new RuntimeException("too many players.");
        }

        String[] deck = new String[52];
        for (int i = 0; i < cards.length; i++) {
            for (int j = 0; j < suits.length; j++) {
                deck[suits.length * i + j] = cards[i] + " of " + suits[j];
            }
        }

        for (int i = 0; i < 52; i++) {
            int r = i + (int) (Math.random() * (52 - i));
            String temp = deck[r];
            deck[r] = deck[i];
            deck[i] = temp;
        }

        for (int i = 0; i < players * numberOfCards; i++) {
            System.out.println(deck[i]);
            if (i % numberOfCards == numberOfCards - 1) {
                System.out.println();
            }
        }
    }
}
