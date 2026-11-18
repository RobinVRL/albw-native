#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_00588BE4(int param_1);
extern uint *DAT_0021a584;
extern int *DAT_0021a588;
extern int DAT_0021a58c;
extern undefined4 DAT_0021a590;
extern undefined4 DAT_0021a594;
extern int DAT_0021a598;

// USA 0021A4F0 <- EU 0021A4F0 (Ghidra, non-matching)
// GLOBAL DAT_0021a584 uint *
// GLOBAL DAT_0021a588 int *
// GLOBAL DAT_0021a58c int
// GLOBAL DAT_0021a590 undefined4
// GLOBAL DAT_0021a594 undefined4
// GLOBAL DAT_0021a598 int

void func_0021A4F0(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x4))
  if (*(char *)((int)param_1 + 0x1371) == '\0') {
    if (param_1[0xd1] != 0) {
      func_004A1B9C(&iStack_10,param_1[0xd1],DAT_0021a584);
    }
    iVar1 = func_00588BE4((int)param_1);
    if (iVar1 == *DAT_0021a588) {
      iStack_10 = DAT_0021a58c;
      uStack_c = DAT_0021a590;
      func_00150A84(param_1,&iStack_10,0);
    }
    else {
      iStack_10 = DAT_0021a58c;
      uStack_c = DAT_0021a594;
      func_00150A84(param_1,&iStack_10,0);
    }
    *(undefined1 *)(DAT_0021a598 + (int)param_1) = 1;
  }
  return;
}

