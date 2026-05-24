--- grub-core/kern/x86_64/dl.c.orig	2018-02-23 00:00:00.000000000 +0000
+++ grub-core/kern/x86_64/dl.c
@@ -70,6 +70,7 @@
 	 break;

        case R_X86_64_PC32:
+       case R_X86_64_PLT32:
 	 {
