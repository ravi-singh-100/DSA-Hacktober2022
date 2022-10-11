import java.lang.*;
import java.util.*;
public class Demo {
   public static void pigeonhole_sorting(int my_arr[], int n) {
      int min_element = my_arr[0];
      int max_element = my_arr[0];
      int my_range, i, j, index;
      for(int a=0; a<n; a++) {
         if(my_arr[a] > max_element)
            max_element = my_arr[a];
         if(my_arr[a] < min_element)
            min_element = my_arr[a];
      }
      my_range = max_element - min_element + 1;
      int[] sorted_arr = new int[my_range];
      Arrays.fill(sorted_arr, 0);
      for(i = 0; i<n; i++)
         sorted_arr[my_arr[i] - min_element]++;
         index = 0;
      for(j = 0; j<my_range; j++)
         while(sorted_arr[j]-->0)
         my_arr[index++]=j+min_element;
   }
   public static void main(String[] args) {
      Demo my_instance = new Demo();
      int[] my_arr = {45, 67, 1, 20, 99, 74, 78};
      System.out.print("The array, after performing pigeonhole sorting is : ");
      my_instance.pigeonhole_sorting(my_arr,my_arr.length);
      for(int i=0 ; i<my_arr.length ; i++)
      System.out.print(my_arr[i] + " ");
   }}
