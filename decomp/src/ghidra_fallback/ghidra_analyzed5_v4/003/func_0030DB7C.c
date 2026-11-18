#include "ghidra_types.h"

extern int func_00290240(int param_1,undefined1 param_2,undefined1 param_3,float fparam_0);
extern int func_0030C144(int *param_1);
extern int func_0054B260(int param_1,uint param_2);
extern int func_0058DA24(int param_1);
extern int *DAT_0030dc18;
extern int *DAT_0030dc1c;

// USA 0030DB7C <- EU 0030DB58 (Ghidra, non-matching)
// GLOBAL DAT_0030dc18 int *
// GLOBAL DAT_0030dc1c int *
// GLOBAL EXT_00000008 undefined

undefined4 func_0030DB7C(int *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  pcVar2 = (char *)param_1[0x3c];
  cVar1 = *pcVar2;
  if (cVar1 == '\x03') {
    pcVar2 = (char *)(uint)*(ushort *)(pcVar2 + 10);
  }
  if (cVar1 == '\x03' && pcVar2 == &SupervisorCall) {
    uVar3 = func_0054B260((int)param_1,3);
    if (((uVar3 == 0) && (*DAT_0030dc18 != 0)) && (iVar4 = func_0058DA24(*DAT_0030dc18), iVar4 == 0)
       ) {
      (**(code **)(*param_1 + 0x30))(param_1);
    }
    uVar3 = func_0054B260((int)param_1,2);
    if (uVar3 == 100) {
      uVar3 = func_0054B260((int)param_1,1);
      uVar5 = func_0054B260((int)param_1,0);
      func_00290240(*DAT_0030dc1c,(char)uVar5,uVar3 != 0,ALBW_AS_F32(param_1[0x21]));
    }
  }
  return func_0030C144(param_1);
}

