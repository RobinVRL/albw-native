#include "ghidra_types.h"

extern int func_0052E8A0(int param_1);
extern int func_00584A38(int param_1,int param_2);
extern int *DAT_002926e0;
extern int DAT_002926e4;
extern int *DAT_002926e8;
extern undefined4 DAT_002926f8;
extern char s_CatchInsect_002926ec[];

// USA 002925A0 <- EU 002925C8 (Ghidra, non-matching)
// GLOBAL DAT_002926e0 int *
// GLOBAL DAT_002926e4 int
// GLOBAL DAT_002926e8 int *
// GLOBAL DAT_002926f8 undefined4
// GLOBAL s_CatchInsect_002926ec string

undefined4 func_002925A0(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x0))
  #define pcStack_1c (*(char * *)(albw_frame + 0x4))
  iVar2 = *(int *)(param_1 + 0x14);
  if (((param_2 == 6 || param_2 == 7) || (param_2 == 5 || param_2 == 9)) ||
     (param_2 == 10 || param_2 == 8)) {
    if (*(char *)(*DAT_002926e0 + 0x18) == '\a' || *(char *)(*DAT_002926e0 + 0x18) == '%') {
      return 1;
    }
    bVar1 = func_0052E8A0(*(int *)(iVar2 + 0x10));
    if (((!bVar1) && (*(int *)(*(int *)(iVar2 + 0x10) + 0x5b0) == 0x3f800000)) &&
       (((*(uint *)(DAT_002926e4 + *(short *)(iVar2 + 0x42) * 0x10 + 4) & 0x2000) != 0 &&
        (iVar3 = func_00584A38(*DAT_002926e8,*(int *)(iVar2 + 0x78)), uStack_20 = DAT_002926f8,
        iVar3 != 0)))) {
      iVar3 = *(int *)(iVar2 + 0x78);
      *(int *)(iVar3 + 0x2cc) = param_2;
      *(undefined4 *)(iVar3 + 0x2d0) = param_3;
      pcStack_1c = s_CatchInsect_002926ec;
      iVar3 = (**(code **)(**(int **)(iVar2 + 0x78) + 0x4c))(*(int **)(iVar2 + 0x78),&uStack_20,0);
      if (iVar3 != 0) {
        if (*(short *)(iVar2 + 0x42) != 0x9d) {
          return 1;
        }
        *(undefined1 *)(*(int *)(iVar2 + 0x48) + 0x141) = 1;
        return 1;
      }
    }
  }
  return 0;
}

