# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.4.1)#--指定CMake的版本

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.

#--add_library是添加类库，下面3个分别表示类库的名字叫做native-lib.so, SHARED这个选项表示共享类库的意思(就是以so结尾)
#--src/main/cpp/native-lib.cpp表示native-lib.so对应的C++源代码位置
#--这个add_library很重要，因为如果要添加其他类库，那么都是这样的方法来的，比如

#--add_library( # Sets the name of the library.
#--             wlffmpeg
#--             # Sets the library as a shared library.
#--             SHARED
#--             # Provides a relative path to your source file(s).
#--             src/main/jni/player.cpp

add_library( # Sets the name of the library.
             native-lib

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             src/main/cpp/native-lib.cpp )

# Searches for a specified prebuilt library and stores the path as a
# variable. Because CMake includes system libraries in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

#--表示系统的日志库，只需要导入一个就可以了

find_library( # Sets the name of the path variable.
              log-lib

              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log )

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.

#--链接库，要跟上面的类库名字保持一致

target_link_libraries( # Specifies the target library.
                       native-lib

                       # Links the target library to the log library
                       # included in the NDK.
                       ${log-lib} )