package com.jni_test001;

import android.app.Application;

/**
 * author: liweixing
 * date: 2018/3/15
 */

public class JniDemo {
    static {
        System.loadLibrary("native-lib");
    }

    //静态注册
    public static native Object getPackage();

    //静态注册
    public static native int addTest(int a, int b);

    //需要动态注册的方法
    public static native Application getApplicationObject();
}
