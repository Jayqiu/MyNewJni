package com.threehalf.mynewjni;

/**
 * @author jayqiu
 * @describe
 * @date 2017/3/30 13:52
 */
public class MyNdk {
    static {
        System.loadLibrary("MyNdk");
    }
    public  native int getAdd(int a,int b);
    public  native String getString();
    public  native  Books getBooks(Books books);


}
