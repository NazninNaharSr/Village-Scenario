# Village-Scenario
This is a fully functional C++ OpenGL project for visualizing dynamic weather and environment effects like rain, snow, ship animation, and seasonal transitions.



# **GLUT Setup**

Glut setup
-  Download glut-3.7.6-bin from Google
-  Unzip the file. There will be at least 3 files. (glut.h, glut32.dll, glut32.lib)
-  go location : C:\Program Files (x86)\CodeBlocks\MinGW\include
-  in GL folder, paste glut.h
- go location: C:\Program Files (x86)\CodeBlocks\MinGW\lib
, paste glut32.lib
- go C:\Windows\SysWOW64 , paste glut32.dll
  
**Note:** If your Operating System is 32 bit, Folder name might be
C:\Windows\System32

# **Linker settings for Codeblocks**
- Select settings -- select compiler -- linker settings- press clear
- press add, location: C:\Program Files (x86)\CodeBlocks\MinGW\lib
- add: libglu32.a, libglut32.a, libopengl32.a
- press ok
