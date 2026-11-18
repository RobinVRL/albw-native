#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_004400A4(int param_1);
extern int func_00440124(int param_1);
extern int func_0044015C(int param_1);
extern int func_0044036C(int param_1);
extern int func_00532C78(int param_1);
extern int func_00573A38(int param_1);
extern int *DAT_0036dabc;
extern int *DAT_0036dac0;
extern float DAT_0036dac4;

// USA 0036D994 <- EU 0036D970 (Ghidra, non-matching)
// GLOBAL DAT_0036dabc int *
// GLOBAL DAT_0036dac0 int *
// GLOBAL DAT_0036dac4 float

undefined4 func_0036D994(int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = DAT_0036dac0;
  iVar3 = *(int *)(param_1 + 0xb10);
  if (iVar3 == param_2) {
    if (*(char *)(*DAT_0036dabc + 0x25) != '\x02') {
      iVar4 = *(int *)(*DAT_0036dac0 + 0xe4);
      if (iVar3 == 0) {
        bVar2 = func_00532C78(iVar4 + 0x110);
        if (!bVar2) {
          if (*(char *)(param_1 + 0xb14) == '\0') {
            func_00440124(iVar4);
            *(undefined1 *)(param_1 + 0xb14) = 1;
          }
          else {
            bVar2 = func_00573A38(iVar4);
            if (bVar2) {
              return 1;
            }
          }
        }
      }
      else if (iVar3 == 1) {
        bVar2 = func_00532C78(iVar4 + 0x134);
        if (!bVar2) {
          func_002317C0((undefined2 *)(iVar4 + 0x14c),DAT_0036dac4);
          return 1;
        }
      }
      else if ((iVar3 == 2) && (bVar2 = func_00532C78(iVar4 + 0x134), !bVar2)) {
        return 1;
      }
    }
  }
  else {
    if (*(char *)(*DAT_0036dabc + 0x25) != '\x02') {
      iVar3 = *(int *)(*DAT_0036dac0 + 0xe4);
      if (param_2 == 0) {
        func_0044036C(iVar3);
        *(ushort *)(*piVar1 + 0x33e) = *(ushort *)(*piVar1 + 0x33e) & 0xfefc;
      }
      else if (param_2 == 1) {
        func_004400A4(iVar3);
      }
      else if (param_2 == 2) {
        func_0044015C(iVar3);
      }
    }
    *(int *)(param_1 + 0xb10) = param_2;
  }
  return 0;
}

