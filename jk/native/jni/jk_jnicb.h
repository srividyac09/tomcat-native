/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_apache_tomcat_modules_server_JNIConnectionHandler */

#ifndef _Included_org_apache_tomcat_modules_server_JNIConnectionHandler
#define _Included_org_apache_tomcat_modules_server_JNIConnectionHandler
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_apache_tomcat_modules_server_JNIConnectionHandler
 * Method:    getNumberOfHeaders
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_apache_tomcat_modules_server_JNIConnectionHandler_getNumberOfHeaders
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_apache_tomcat_modules_server_JNIConnectionHandler
 * Method:    read
 * Signature: (JJ[BII)I
 */
JNIEXPORT jint JNICALL Java_org_apache_tomcat_modules_server_JNIConnectionHandler_read
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint, jint);

/*
 * Class:     org_apache_tomcat_modules_server_JNIConnectionHandler
 * Method:    readEnvironment
 * Signature: (JJ[Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_apache_tomcat_modules_server_JNIConnectionHandler_readEnvironment
  (JNIEnv *, jobject, jlong, jlong, jobjectArray);

/*
 * Class:     org_apache_tomcat_modules_server_JNIConnectionHandler
 * Method:    readHeaders
 * Signature: (JJ[Ljava/lang/String;[Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_apache_tomcat_modules_server_JNIConnectionHandler_readHeaders
  (JNIEnv *, jobject, jlong, jlong, jobjectArray, jobjectArray);

/*
 * Class:     org_apache_tomcat_modules_server_JNIConnectionHandler
 * Method:    startReasponse
 * Signature: (JJILjava/lang/String;[Ljava/lang/String;[Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_org_apache_tomcat_modules_server_JNIConnectionHandler_startReasponse
  (JNIEnv *, jobject, jlong, jlong, jint, jstring, jobjectArray, jobjectArray, jint);

/*
 * Class:     org_apache_tomcat_modules_server_JNIConnectionHandler
 * Method:    write
 * Signature: (JJ[BII)I
 */
JNIEXPORT jint JNICALL Java_org_apache_tomcat_modules_server_JNIConnectionHandler_write
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
