package com.jni_test001;

/**
 * author: liweixing
 * date: 2018/3/15
 */

public class JNIUtil {

    static
    {
        System.loadLibrary("JNITestSample");//名字注意，需要跟你的build.gradle ndk节点       下面的名字一样
    }

    public native String getWorld();
}
