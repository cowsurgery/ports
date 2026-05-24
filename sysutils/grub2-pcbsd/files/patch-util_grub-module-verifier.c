--- util/grub-module-verifier.c.orig	2018-02-23 00:00:00.000000000 +0000
+++ util/grub-module-verifier.c
@@ -19,6 +19,7 @@
       -1
     }, (int[]){
       R_X86_64_PC32,
+      R_X86_64_PLT32,
       -1
     }
