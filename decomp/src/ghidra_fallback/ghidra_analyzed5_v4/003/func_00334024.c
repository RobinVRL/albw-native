#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int iRam00334084;
extern undefined4 uRam00334080;

// USA 00334024 <- EU 00334000 (Ghidra, non-matching)
// GLOBAL UNK_00334080 undefined4
// GLOBAL UNK_00334084 int

void func_00334024(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x4))
  *(undefined1 *)(*(int *)(param_1 + 0x414) + 0x44) = *(undefined1 *)(param_1 + 0x425);
  *(undefined1 *)(*(int *)(param_1 + 0x410) + 0x44) = 0;
  func_004CF478(*(int *)(param_1 + 0x40c),0);
  func_00588C14(param_1,0,1);
  (**(code **)(*(int *)(param_1 + 800) + 0x30))(param_1 + 800);
  uStack_c = uRam00334080;
  iStack_10 = iRam00334084;
  func_00150A84((int *)param_1,&iStack_10,0);
  *(undefined1 *)(param_1 + 0x424) = 1;
  return;
}

