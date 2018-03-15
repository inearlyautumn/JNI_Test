#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_jni_1test001_JniDemo_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT jobject JNICALL
Java_com_jni_1test001_JniDemo_getPackage(JNIEnv *env, jclass type) {

    std::string hello = "com.example.test";
    return env->NewStringUTF(hello.c_str());

}extern "C"
JNIEXPORT jint JNICALL
Java_com_jni_1test001_JniDemo_addTest(JNIEnv *env, jclass type, jint a, jint b) {

    return a + b;

}