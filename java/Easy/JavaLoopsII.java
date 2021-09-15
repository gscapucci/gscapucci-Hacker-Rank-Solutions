package java.Easy;

import java.util.*;
import java.io.*;

class JavaLoopsII{
    public static void main(String []args){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            int sum = a;
            for(int j = 1, k = 0; k < n; j *= 2, k++){
                sum += j*b;
                System.out.print(sum + " ");
            }
            System.out.println();
        }
        in.close();
    }
}