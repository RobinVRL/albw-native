/* USA 003FDC34 (EU 003FDC14): SARC archive: list file names (count names from *index into
 * 0x100-byte slots of out; a file without a name (attr 0) is printed as its "%08x" hash).
 * Native fix of the generated Ghidra text: the variadic argument of the snprintf helper 003E6AA8
 * (the entry's name hash, stored at [sp] at EU 003FDD04) was dropped. Rest unchanged.
 * Confidence: high. */
#include "ghidra_types.h"

extern int func_003E6AA8(char *buf, uint size, int max_len, const char *fmt, ...);
extern undefined DAT_003fdd1c;

// USA 003FDC34 <- EU 003FDC14 (Ghidra, non-matching)
// GLOBAL DAT_003fdd1c undefined

uint func_003FDC34(int param_1,int *param_2,int param_3,uint param_4)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  
  uVar6 = 0;
  do {
    uVar2 = *param_2 + uVar6;
    if (*(ushort *)(*(int *)(param_1 + 4) + 6) <= uVar2 || param_4 <= uVar6) {
      *param_2 = *param_2 + uVar6;
      return uVar6;
    }
    if (uVar2 < *(uint *)(param_1 + 0xc)) {
      iVar3 = *(int *)(param_1 + 0x10) + uVar2 * 0x10;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x10);
    }
    if (*(uint *)(iVar3 + 4) == 0) {
      func_003E6AA8((char *)(param_3 + uVar6 * 0x100),0x100,0xff,(const char *)&DAT_003fdd1c,*(uint *)iVar3);  /* "%08x", name hash */
    }
    else {
      uVar2 = *(uint *)(iVar3 + 4) & 0xffffff;
      if (*(uint *)(param_1 + 0x14) < *(int *)(param_1 + 8) + uVar2) {
        *(undefined1 *)(param_3 + uVar6 * 0x100) = 0;
      }
      else {
        pcVar1 = (char *)(*(int *)(param_1 + 8) + uVar2 * 4);
        uVar2 = 0;
        pcVar4 = (char *)(param_3 + uVar6 * 0x100);
        do {
          pcVar5 = pcVar4;
          if (0xfe < uVar2) break;
          uVar2 = uVar2 + 1;
          pcVar5 = pcVar4 + 1;
          *pcVar4 = *pcVar1;
          pcVar1 = pcVar1 + 1;
          pcVar4 = pcVar5;
        } while (*pcVar1 != '\0');
        *pcVar5 = '\0';
      }
    }
    uVar6 = uVar6 + 1;
  } while( true );
}

