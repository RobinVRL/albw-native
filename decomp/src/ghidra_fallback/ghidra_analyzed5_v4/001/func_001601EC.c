#include "ghidra_types.h"

extern int func_002228D0(int param_1,int param_2,uint param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0052FD7C(int param_1,undefined *param_2,undefined4 param_3);
extern int *DAT_00160340;
extern undefined *DAT_00160344;
extern undefined4 DAT_00160348;

// USA 001601EC <- EU 001601F0 (Ghidra, non-matching)
// GLOBAL DAT_00160340 int *
// GLOBAL DAT_00160344 undefined *
// GLOBAL DAT_00160348 undefined4

undefined4 func_001601EC(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  func_0052FD7C(*DAT_00160340 + 0x3dbbc,DAT_00160344,param_1);
  if ((param_2 != 0x12 && param_2 != 0x13) && (param_2 != 2)) {
    func_004FC07C(param_1,10,0xffffffff,(int)*(char *)(param_1 + 0xe4e));
    if (*(int *)(param_1 + 0x960) != 0) {
      func_002228D0(*(int *)(param_1 + 0x960),10,0xffffffff);
    }
    uVar2 = DAT_00160348;
    if ((*(ushort *)(param_1 + 0x2e) & 0xff) == 0) {
      cVar1 = *(char *)(param_3 + 0x24);
      if ((cVar1 != '\x05' && cVar1 != '\r') && (cVar1 != '\x0e' && cVar1 != '\b')) {
        if (*(char *)(param_1 + 0xf9d) == '\0') {
          *(undefined4 *)(param_1 + 0x930) = 0x69;
          *(undefined4 *)(param_1 + 0x934) = uVar2;
          *(undefined4 *)(param_1 + 0x92c) = 0;
          *(undefined1 *)(param_1 + 0xf9d) = 1;
          *(undefined2 *)(param_1 + 0xdee) = *(undefined2 *)(param_1 + 0x50c);
        }
        func_004FC07C(param_1,0xb,0xffffffff,(int)*(char *)(param_1 + 0xe4e));
        if (*(int *)(param_1 + 0x960) != 0) {
          return func_002228D0(*(int *)(param_1 + 0x960),0xb,0xffffffff);
        }
      }
    }
    else if (*(char *)(param_1 + 0xf9d) == '\0') {
      *(undefined4 *)(param_1 + 0x930) = 0x69;
      *(undefined4 *)(param_1 + 0x934) = uVar2;
      *(undefined4 *)(param_1 + 0x92c) = 0;
      *(undefined1 *)(param_1 + 0xf9d) = 1;
      *(undefined2 *)(param_1 + 0xdee) = *(undefined2 *)(param_1 + 0x50c);
    }
  }
  return 0;
}

