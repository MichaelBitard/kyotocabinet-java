/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class kyotocabinet_DB */

#ifndef _Included_kyotocabinet_DB
#define _Included_kyotocabinet_DB
#ifdef __cplusplus
extern "C" {
#endif
#undef kyotocabinet_DB_GEXCEPTIONAL
#define kyotocabinet_DB_GEXCEPTIONAL 1L
#undef kyotocabinet_DB_OREADER
#define kyotocabinet_DB_OREADER 1L
#undef kyotocabinet_DB_OWRITER
#define kyotocabinet_DB_OWRITER 2L
#undef kyotocabinet_DB_OCREATE
#define kyotocabinet_DB_OCREATE 4L
#undef kyotocabinet_DB_OTRUNCATE
#define kyotocabinet_DB_OTRUNCATE 8L
#undef kyotocabinet_DB_OAUTOTRAN
#define kyotocabinet_DB_OAUTOTRAN 16L
#undef kyotocabinet_DB_OAUTOSYNC
#define kyotocabinet_DB_OAUTOSYNC 32L
#undef kyotocabinet_DB_ONOLOCK
#define kyotocabinet_DB_ONOLOCK 64L
#undef kyotocabinet_DB_OTRYLOCK
#define kyotocabinet_DB_OTRYLOCK 128L
#undef kyotocabinet_DB_ONOREPAIR
#define kyotocabinet_DB_ONOREPAIR 256L
#undef kyotocabinet_DB_MSET
#define kyotocabinet_DB_MSET 0L
#undef kyotocabinet_DB_MADD
#define kyotocabinet_DB_MADD 1L
#undef kyotocabinet_DB_MREPLACE
#define kyotocabinet_DB_MREPLACE 2L
#undef kyotocabinet_DB_MAPPEND
#define kyotocabinet_DB_MAPPEND 3L
/*
 * Class:     kyotocabinet_DB
 * Method:    error
 * Signature: ()Lkyotocabinet/Error;
 */
JNIEXPORT jthrowable JNICALL Java_kyotocabinet_DB_error
  (JNIEnv *, jobject);

/*
 * Class:     kyotocabinet_DB
 * Method:    open
 * Signature: (Ljava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_kyotocabinet_DB_open
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     kyotocabinet_DB
 * Method:    close
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_kyotocabinet_DB_close
  (JNIEnv *, jobject);

/*
 * Class:     kyotocabinet_DB
 * Method:    accept
 * Signature: ([BLkyotocabinet/Visitor;Z)Z
 */
JNIEXPORT jboolean JNICALL Java_kyotocabinet_DB_accept
  (JNIEnv *, jobject, jbyteArray, jobject, jboolean);

/*
 * Class:     kyotocabinet_DB
 * Method:    accept_bulk
 * Signature: ([[BLkyotocabinet/Visitor;Z)Z
 */
JNIEXPORT jboolean JNICALL Java_kyotocabinet_DB_accept_1bulk
  (JNIEnv *, jobject, jobjectArray, jobject, jboolean);

/*
 * Class:     kyotocabinet_DB
 * Method:    iterate
 * Signature: (Lkyotocabinet/Visitor;Z)Z
 */
JNIEXPORT jboolean JNICALL Java_kyotocabinet_DB_iterate
  (JNIEnv *, jobject, jobject, jboolean);

/*
 * Class:     kyotocabinet_DB
 * Method:    scan_parallel
 * Signature: (Lkyotocabinet/Visitor;Z)Z
 */
JNIEXPORT jboolean JNICALL Java_kyotocabinet_DB_scan_parallel
  (JNIEnv *, jobject, jobject, jint);


/*
 * Class:     kyotocabinet_DB
 * Method:    set
 * Signature: ([B[B)Z
 */
JNIEXPORT jboolean JNICALL Java_kyotocabinet_DB_set
  (JNIEnv *, jobject, jbyteArray, jbyteArray);

/*
 * Class:     kyotocabinet_DB
 * Method:    add
 * Signature: ([B[B)Z
 */
JNIEXPORT jboolean JNICALL Java_kyotocabinet_DB_add
  (JNIEnv *, jobject, jbyteArray, jbyteArray);

/*
 * Class:     kyotocabinet_DB
 * Method:    replace
 * Signature: ([B[B)Z
 */
JNIEXPORT jboolean JNICALL Java_kyotocabinet_DB_replace
  (JNIEnv *, jobject, jbyteArray, jbyteArray);

/*
 * Class:     kyotocabinet_DB
 * Method:    append
 * Signature: ([B[B)Z
 */
JNIEXPORT jboolean JNICALL Java_kyotocabinet_DB_append
  (JNIEnv *, jobject, jbyteArray, jbyteArray);

/*
 * Class:     kyotocabinet_DB
 * Method:    increment
 * Signature: ([BJJ)J
 */
JNIEXPORT jlong JNICALL Java_kyotocabinet_DB_increment
  (JNIEnv *, jobject, jbyteArray, jlong, jlong);

/*
 * Class:     kyotocabinet_DB
 * Method:    increment_double
 * Signature: ([BDD)D
 */
JNIEXPORT jdouble JNICALL Java_kyotocabinet_DB_increment_1double
  (JNIEnv *, jobject, jbyteArray, jdouble, jdouble);

/*
 * Class:     kyotocabinet_DB
 * Method:    cas
 * Signature: ([B[B[B)Z
 */
JNIEXPORT jboolean JNICALL Java_kyotocabinet_DB_cas
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     kyotocabinet_DB
 * Method:    remove
 * Signature: ([B)Z
 */
JNIEXPORT jboolean JNICALL Java_kyotocabinet_DB_remove
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     kyotocabinet_DB
 * Method:    get
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_kyotocabinet_DB_get
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     kyotocabinet_DB
 * Method:    check
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_kyotocabinet_DB_check
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     kyotocabinet_DB
 * Method:    seize
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_kyotocabinet_DB_seize
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     kyotocabinet_DB
 * Method:    set_bulk
 * Signature: ([[BZ)J
 */
JNIEXPORT jlong JNICALL Java_kyotocabinet_DB_set_1bulk
  (JNIEnv *, jobject, jobjectArray, jboolean);

/*
 * Class:     kyotocabinet_DB
 * Method:    remove_bulk
 * Signature: ([[BZ)J
 */
JNIEXPORT jlong JNICALL Java_kyotocabinet_DB_remove_1bulk
  (JNIEnv *, jobject, jobjectArray, jboolean);

/*
 * Class:     kyotocabinet_DB
 * Method:    get_bulk
 * Signature: ([[BZ)[[B
 */
JNIEXPORT jobjectArray JNICALL Java_kyotocabinet_DB_get_1bulk
  (JNIEnv *, jobject, jobjectArray, jboolean);

/*
 * Class:     kyotocabinet_DB
 * Method:    clear
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_kyotocabinet_DB_clear
  (JNIEnv *, jobject);

/*
 * Class:     kyotocabinet_DB
 * Method:    synchronize
 * Signature: (ZLkyotocabinet/FileProcessor;)Z
 */
JNIEXPORT jboolean JNICALL Java_kyotocabinet_DB_synchronize
  (JNIEnv *, jobject, jboolean, jobject);

/*
 * Class:     kyotocabinet_DB
 * Method:    occupy
 * Signature: (ZLkyotocabinet/FileProcessor;)Z
 */
JNIEXPORT jboolean JNICALL Java_kyotocabinet_DB_occupy
  (JNIEnv *, jobject, jboolean, jobject);

/*
 * Class:     kyotocabinet_DB
 * Method:    copy
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_kyotocabinet_DB_copy
  (JNIEnv *, jobject, jstring);

/*
 * Class:     kyotocabinet_DB
 * Method:    begin_transaction
 * Signature: (Z)Z
 */
JNIEXPORT jboolean JNICALL Java_kyotocabinet_DB_begin_1transaction
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     kyotocabinet_DB
 * Method:    end_transaction
 * Signature: (Z)Z
 */
JNIEXPORT jboolean JNICALL Java_kyotocabinet_DB_end_1transaction
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     kyotocabinet_DB
 * Method:    dump_snapshot
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_kyotocabinet_DB_dump_1snapshot
  (JNIEnv *, jobject, jstring);

/*
 * Class:     kyotocabinet_DB
 * Method:    load_snapshot
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_kyotocabinet_DB_load_1snapshot
  (JNIEnv *, jobject, jstring);

/*
 * Class:     kyotocabinet_DB
 * Method:    count
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_kyotocabinet_DB_count
  (JNIEnv *, jobject);

/*
 * Class:     kyotocabinet_DB
 * Method:    size
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_kyotocabinet_DB_size
  (JNIEnv *, jobject);

/*
 * Class:     kyotocabinet_DB
 * Method:    path
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_kyotocabinet_DB_path
  (JNIEnv *, jobject);

/*
 * Class:     kyotocabinet_DB
 * Method:    status
 * Signature: ()Ljava/util/Map;
 */
JNIEXPORT jobject JNICALL Java_kyotocabinet_DB_status
  (JNIEnv *, jobject);

/*
 * Class:     kyotocabinet_DB
 * Method:    match_prefix
 * Signature: (Ljava/lang/String;J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_kyotocabinet_DB_match_1prefix
  (JNIEnv *, jobject, jstring, jlong);

/*
 * Class:     kyotocabinet_DB
 * Method:    match_regex
 * Signature: (Ljava/lang/String;J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_kyotocabinet_DB_match_1regex
  (JNIEnv *, jobject, jstring, jlong);

/*
 * Class:     kyotocabinet_DB
 * Method:    match_similar
 * Signature: (Ljava/lang/String;JZJ)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_kyotocabinet_DB_match_1similar
  (JNIEnv *, jobject, jstring, jlong, jboolean, jlong);

/*
 * Class:     kyotocabinet_DB
 * Method:    merge
 * Signature: ([Lkyotocabinet/DB;I)Z
 */
JNIEXPORT jboolean JNICALL Java_kyotocabinet_DB_merge
  (JNIEnv *, jobject, jobjectArray, jint);

/*
 * Class:     kyotocabinet_DB
 * Method:    cursor
 * Signature: ()Lkyotocabinet/Cursor;
 */
JNIEXPORT jobject JNICALL Java_kyotocabinet_DB_cursor
  (JNIEnv *, jobject);

/*
 * Class:     kyotocabinet_DB
 * Method:    initialize
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_kyotocabinet_DB_initialize
  (JNIEnv *, jobject, jint);

/*
 * Class:     kyotocabinet_DB
 * Method:    destruct
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_kyotocabinet_DB_destruct
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
