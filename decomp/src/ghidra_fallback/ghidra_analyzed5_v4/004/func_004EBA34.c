#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_004eba6c;
extern char s_SE_PL_SWORD_PUT_IN_004eba58[];

// USA 004EBA34 <- EU 004EBA0C (Ghidra, non-matching)
// GLOBAL DAT_004eba6c int
// GLOBAL s_SE_PL_SWORD_PUT_IN_004eba58 string

void func_004EBA34(int param_1)

{
  char cVar1;
  bool bVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  bVar2 = *(int *)(param_1 + 0x58) != 0;
  cVar1 = '\0';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x80);
  }
  if (bVar2 && cVar1 != '\0') {
    local_c = s_SE_PL_SWORD_PUT_IN_004eba58;
    local_10 = DAT_004eba6c;
    if (*(int **)(param_1 + 0x58) != (int *)0x0) {
      func_00150A84(*(int **)(param_1 + 0x58),&local_10,0);
    }
    return;
  }
  return;
}

