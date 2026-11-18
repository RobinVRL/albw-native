#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_0049DA04(int param_1,int *param_2,uint param_3);
extern int func_0049F8C4(int *param_1);
extern undefined4 DAT_0048db6c;
extern int DAT_0048db70;

// USA 0048DAB4 <- EU 0048DA8C (Ghidra, non-matching)
// GLOBAL DAT_0048db6c undefined4
// GLOBAL DAT_0048db70 int

undefined4 func_0048DAB4(int *param_1,int *param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(undefined1 *)(albw_frame + 0x4))
  iVar1 = param_1[0x17] + 4;
  func_0010C0B8(iVar1);
  if (*(char *)((int)param_1 + 0x1e9) == '\0') {
    *(undefined1 *)(param_1 + 0x1b) = 1;
    iVar2 = func_0049DA04(param_1[0x17],param_2,5);
    if (iVar2 != 0) {
      param_1[0x1c] = (int)param_2;
      local_20 = DAT_0048db6c;
      param_2[0xc] = param_2[0xc] | 1;
      local_1c = 3;
      (**(code **)(*(int *)param_1[0x1c] + 0x38))((int *)param_1[0x1c],&local_20);
      func_00110D44(param_1 + 0x1d,param_3,0x80);
      param_1[0x75] = 0;
      *(undefined1 *)((int)param_1 + 0x1e9) = 1;
      iVar2 = DAT_0048db70;
      *(undefined1 *)(param_1 + 0x7a) = 0;
      param_1[0x79] = iVar2;
      func_0049F8C4(param_1);
      func_0010EEE0(iVar1);
      return 1;
    }
  }
  func_0010EEE0(iVar1);
  return 0;
}

