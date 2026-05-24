--- grub-core/efiemu/i386/loadcore64.c.orig	2018-02-23 00:00:00.000000000 +0000
+++ grub-core/efiemu/i386/loadcore64.c
@@ -98,6 +98,7 @@
 		   break;

 		 case R_X86_64_PC32:
+		 case R_X86_64_PLT32:
 		   err = grub_efiemu_write_value (addr,
