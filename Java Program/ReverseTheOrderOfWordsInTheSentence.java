/*
Example:
Java is best
best is Java
 */

import java.util.Scanner;

public class ReverseTheOrderOfWordsInTheSentence {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();

        String[] words = input.split(" ");

        String output = "";
        for (String word : words) {
            output = word + " " + output;
        }

        System.out.println(output);

    }
}