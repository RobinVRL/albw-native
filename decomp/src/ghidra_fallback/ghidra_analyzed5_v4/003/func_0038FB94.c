#include "ghidra_types.h"

extern undefined8 func_00259354(int param_1,int *param_2,int param_3);
extern int func_00297298(int param_1,int param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00667F14(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0038fbec;
extern int *DAT_0038fbf0;
extern undefined4 *DAT_0038fbf4;
extern int DAT_0038fbf8;

// USA 0038FB94 <- EU 0038FB70 (Ghidra, non-matching)
// GLOBAL DAT_0038fbec int *
// GLOBAL DAT_0038fbf0 int *
// GLOBAL DAT_0038fbf4 undefined4 *
// GLOBAL DAT_0038fbf8 int

uint func_0038FB94(int param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  bVar2 = func_00588BF0(param_1,0);
  uVar3 = 0;
  if (bVar2) {
    func_00667F14((undefined4 *)(param_1 + 0x40c),1);
    piVar1 = DAT_0038fbec;
    func_00297298(*DAT_0038fbec,0xf);
    uVar3 = (uint)*(byte *)(*DAT_0038fbf0 + 0x18);
    if (uVar3 == 0x19) {
      local_c = *DAT_0038fbf4;
      local_10 = DAT_0038fbf8;
      uVar4 = func_00259354(*piVar1,&local_10,0x2d);
      uVar3 = (uint)uVar4;
    }
  }
  return uVar3;
}

