#include "ghidra_types.h"

extern int func_00141D9C(int *param_1,int param_2);
extern int func_00142474(int param_1,int param_2);
extern int func_001507A8(int param_1,int param_2);
extern int DAT_00142a68;

// USA 00142978 <- EU 00142978 (Ghidra, non-matching)
// GLOBAL DAT_00142a68 int

bool func_00142978(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  
  if ((char)param_1[0x140] == '\x02') {
    return false;
  }
  uVar2 = (*(uint *)(param_2 + 0x24) & 0x700) >> 8;
  if (uVar2 == 2) {
LAB_00142a10:
    func_00142474((int)param_1,param_2);
    func_00141D9C(param_1,2);
  }
  else {
    if (uVar2 != 5) {
      uVar2 = *(ushort *)(param_2 + 0x20) & 0x1f;
      if ((DAT_00142a68 < *(int *)(param_2 + 8)) && (uVar2 == 3 || uVar2 == 4)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      uVar2 = (*(ushort *)(param_2 + 0x20) & 0x7e0) >> 5;
      if (uVar2 == 0xe) goto LAB_00142a10;
      if (uVar2 < 0xf) {
        if ((uVar2 == 5 || uVar2 == 7) || uVar2 == 9) goto LAB_00142a10;
      }
      else if (uVar2 == 0x15 || uVar2 == 0x17) goto LAB_00142a10;
      if (!bVar1) {
        bVar1 = func_001507A8((int)param_1,param_2);
        if (!bVar1) {
          return false;
        }
        bVar1 = func_00142474((int)param_1,param_2);
        return bVar1;
      }
    }
    *(undefined1 *)((int)param_1 + 0x2d7) = 1;
  }
  return false;
}

