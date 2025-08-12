package com.javacollections;
import java.util.ArrayList;
public class Arraylist {

    public static void main(String[] args){
        // initial capacity of array list = 10
        ArrayList<Integer> list = new ArrayList<>(); //can set the initial capacity as well
        //adding into a list
        list.add(1);
        list.add(2);
        list.add(3);
        list.add(4);
        list.add(2,40); //1st arg is index num and 2nnd arg is value to be stored at that index
        list.set(1 , 12); // replaces the value on the defined index

        //displaying the list
        System.out.println(list.get(2)); //use index as arg
        System.out.println(list.get(1));
        //for loop
        for(int i =0 ;i <list.size();i++){
            System.out.println("list["+i+"] = "+list.get(i));
        }
        //foreach loop
        for(int i : list){
            System.out.println(i);
        }
        //see if a list contains certain elements or not (true or false)
        System.out.println(list.contains(2));

        //to remove elements from the list
        list.remove(3); //removes index
        list.remove(Integer.valueOf(1)); //will remove the value 1 rather than index
        System.out.println(list.get(3));

    }
}
