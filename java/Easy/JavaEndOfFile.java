package java.Easy;

import java.util.Scanner;

public class JavaEndOfFile {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s;
        int i = 0;
        while(scan.hasNext()){
            i++;
            s = scan.nextLine();
            System.out.println(i + " " + s);
        }
        scan.close();
    }
}
