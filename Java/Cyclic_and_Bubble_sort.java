// Cyclic Sort
import java.util.Arrays;

public class Cyclic_sort {
    public static void main(String[] args) {

        int[] arr = {4,5,3,1,2,6};   //Going to work for 1 to n , continuous number , not less than 0;
        cyclic(arr);
        System.out.println(Arrays.toString(arr));

    }
    static void cyclic(int[] arr){

        int i = 0;

        while (i < arr.length){

            int correct = arr[i] -1;
            if (arr[i] != arr[correct]){
                swap(arr , i ,correct);
            }
            else {
                i++;
            }
        }
    }
    static void swap(int[] arr , int first, int second){

        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
}


// Bubble Sort

import java.util.Arrays;

public class Bubble_sort {
    public static void main(String[] args) {

        int[] arr = {5,4,3,1,-2};
        bubble(arr);
        System.out.println(Arrays.toString(arr));

    }
    static void bubble(int[] arr){
        boolean swapped;
        for (int i = 0; i < arr.length; i++) { // Used to run loop by decresing 1;
            swapped = false;
            for (int j = 1; j < arr.length - i; j++) {        // Used to run the loop
                if (arr[j] < arr[j-1]){

                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                    swapped = true;
                }
            }
            if (swapped == false){ 
                break;
            }
        }
    }
}
