#include "ghidra_types.h"

extern int func_001E6A3C(int param_1);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004C07D8(int param_1);
extern int func_0060E480(int param_1,int param_2,undefined1 param_3);
extern int *DAT_0060e614;

// USA 0060E570 <- EU 0060E548 (Ghidra, non-matching)
// GLOBAL DAT_0060e614 int *

undefined4 func_0060E570(int param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  
  piVar1 = DAT_0060e614;
  if (*(char *)(param_1 + 0x85d) != '\0') {
    if ((*(char *)(param_1 + 0x85a) == '\x03') && (*(char *)(param_1 + 0x858) != '\0')) {
      func_004A8304(*DAT_0060e614,*(int *)(param_1 + 0x86c));
      func_004A879C(*piVar1,*(int *)(param_1 + 0x86c),3);
    }
    func_001E6A3C(param_1);
    *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(param_1 + 0x83c);
    func_004C07D8(param_1);
    *(undefined4 *)(param_1 + 0x810) = 0;
    *(undefined1 *)(param_1 + 0x85d) = 0;
    *(undefined2 *)(param_1 + 0x84c) = 0;
    *(undefined2 *)(param_1 + 0x84e) = 0;
    if ((*(char *)(param_1 + 0x964) == '\x02') &&
       (uVar2 = *(uint *)(param_1 + 0x8ac), (uVar2 & 0x20) != 0)) {
      bVar3 = (uVar2 & 0x10) == 0;
      if (bVar3) {
        uVar2 = (uint)*(byte *)(param_1 + 0x857);
      }
      if (bVar3 && uVar2 == 0) {
        return func_0060E480(param_1,3,0);
      }
    }
    func_0060E480(param_1,*(int *)(param_1 + 0x984),0);
  }
  return 0;
}

