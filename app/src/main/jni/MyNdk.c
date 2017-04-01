#include <jni.h>
#include <syslog.h>
#include <string.h>
#include "MyTesh.h"






JNIEXPORT jstring JNICALL
Java_com_threehalf_mynewjni_MyNdk_getString(JNIEnv *env, jclass type) {

    return (*env)->NewStringUTF(env, "Hello !!!");;
}


JNIEXPORT jobject JNICALL
Java_com_threehalf_mynewjni_MyNdk_getBooks(JNIEnv *env, jobject instance, jobject books) {


    jclass objectClass = (*env)->FindClass(env, "com/threehalf/mynewjni/Books");
    jfieldID title = (*env)->GetFieldID(env,objectClass, "title", "Ljava/lang/String;");
    jfieldID book_id =(*env)->GetFieldID(env,objectClass, "book_id", "I");

    (*env)->SetObjectField(env,books, title, (*env)->NewStringUTF(env,"C 语言"));
    (*env)->SetIntField(env,books, book_id, 10);
    return  books;
}



JNIEXPORT jint JNICALL
Java_com_threehalf_mynewjni_MyNdk_getAdd(JNIEnv *env, jclass type, jint a, jint b) {


    return a+b;
}



struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};