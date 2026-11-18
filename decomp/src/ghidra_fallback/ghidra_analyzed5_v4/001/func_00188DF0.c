#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_00588BE4(int param_1);
extern int iRam00188ecc;
extern int *piRam00188ec8;
extern char s_SE_BombIce_EXPLOSION_00188ed0[];
extern char s_SE_BombS_EXPLOSION_00188ee8[];
extern char s_SE_BombS_EXPLOSION_Lv2_00188efc[];

// USA 00188DF0 <- EU 00188DF0 (Ghidra, non-matching)
// GLOBAL UNK_00188ec8 int *
// GLOBAL UNK_00188ecc int
// GLOBAL s_SE_BombIce_EXPLOSION_00188ed0 string
// GLOBAL s_SE_BombS_EXPLOSION_00188ee8 string
// GLOBAL s_SE_BombS_EXPLOSION_Lv2_00188efc string

void func_00188DF0(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  *(undefined1 *)(param_1 + 0x5d5) = 1;
  *(undefined1 *)(param_1 + 0x639) = 1;
  func_004CF478(*(int *)(param_1 + 0x4f4),0);
  func_00151148(*(int *)(param_1 + 0x52c),0);
  *(undefined1 *)(param_1 + 0x4f1) = 0;
  iVar1 = func_00588BE4(param_1);
  if (iVar1 == *piRam00188ec8) {
    iStack_10 = iRam00188ecc;
    pcStack_c = s_SE_BombIce_EXPLOSION_00188ed0;
    func_00150A84((int *)param_1,&iStack_10,0);
  }
  else {
    iStack_10 = iRam00188ecc;
    if (*(int *)(param_1 + 0x6e8) == 3) {
      pcStack_c = s_SE_BombS_EXPLOSION_Lv2_00188efc;
      func_00150A84((int *)param_1,&iStack_10,0);
    }
    else {
      pcStack_c = s_SE_BombS_EXPLOSION_00188ee8;
      func_00150A84((int *)param_1,&iStack_10,0);
    }
  }
  *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) | 2;
  return;
}

