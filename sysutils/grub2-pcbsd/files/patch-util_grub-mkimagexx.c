--- util/grub-mkimagexx.c.orig	2018-02-23 00:00:00.000000000 +0000
+++ util/grub-mkimagexx.c
@@ -841,6 +841,7 @@
 		 break;

 	       case R_X86_64_PC32:
+	       case R_X86_64_PLT32:
 		 {
