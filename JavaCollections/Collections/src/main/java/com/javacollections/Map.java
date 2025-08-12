package com.javacollections;

import java.util.HashMap;
import java.util.Set;

public class Map {
    public static void main(String[] args) {
        HashMap<Integer , String > mpp = new HashMap<>();
        mpp.put(1,"piyush"); //insertion
        mpp.put(2,"piyuwrwfswsh"); //insertion
        mpp.put(3,"piwetyyush"); //insertion
        mpp.put(4,"piyusfssh"); //insertion
        mpp.put(16,"piyuwetsh"); //insertion
        mpp.put(165,"pigsdgyush"); //insertion
        mpp.put(134,"pilhgyush"); //insertion

        mpp.get(1); //will display piyush
//        mpp.containsKey(); //checks if the key is present or not
        //cant run loop in map but we can convert it into set and then loop it
        Set<Integer> keys = mpp.keySet();
        for(int i : mpp.keySet()){
            System.out.println(mpp.get(i));
        }
    }
}
