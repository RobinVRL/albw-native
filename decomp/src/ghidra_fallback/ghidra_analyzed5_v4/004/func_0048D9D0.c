#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_0049D774(int param_1,int *param_2);
extern int func_0049DC40(int param_1,byte *param_2,int param_3);
extern int func_0049F8C4(int *param_1);
extern int DAT_0048da88;

// USA 0048D9D0 <- EU 0048D9A8 (Ghidra, non-matching)
// GLOBAL DAT_0048da88 int

undefined4 func_0048D9D0(int *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[0x17] + 4;
  func_0010C0B8(iVar1);
  if (*(char *)((int)param_1 + 0x1e9) == '\0') {
    *(undefined1 *)(param_1 + 0x1b) = 0;
    func_00110D44(param_1 + 0x1d,param_2,0x80);
    iVar2 = param_1[0x17];
    func_0010C0B8(iVar2 + 4);
    if ((char)param_1[0x1b] == '\x01') {
      func_0049D774(param_1[0x17],(int *)param_1[0x1c]);
      param_1[0x1c] = 0;
    }
    iVar3 = func_0049DC40(param_1[0x17],(byte *)(param_1 + 0x1d),(int)(param_1 + 0x3e));
    func_0010EEE0(iVar2 + 4);
    if (iVar3 != 0) {
      param_1[0x1c] = 0;
      iVar2 = DAT_0048da88;
      param_1[0x75] = param_1[0x76];
      *(undefined1 *)((int)param_1 + 0x1e9) = 2;
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

