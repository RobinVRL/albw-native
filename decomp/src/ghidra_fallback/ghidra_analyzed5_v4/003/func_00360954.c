// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005568E8(int param_1);
extern int func_005569D4();
extern int func_00666D48(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00360aa0;
extern int *DAT_00360aa4;
extern undefined4 DAT_00360aa8;

// USA 00360954 <- EU 00360930 (Ghidra, non-matching)
// GLOBAL DAT_00360aa0 int *
// GLOBAL DAT_00360aa4 int *
// GLOBAL DAT_00360aa8 undefined4

undefined4 func_00360954(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if ((*(uint *)(param_2 + 0x24) & 0x400000) == 0) {
    puVar5 = (undefined4 *)(param_1 + 0x40c);
    if (*(uint *)(param_2 + 0x28) == *(uint *)(param_1 + 0x50)) {
      if ((*(char *)(param_1 + 0x410) == '\x02') && (*(char *)(param_1 + 0x511) != '\0')) {
        func_00666D48(puVar5,5);
        return 1;
      }
    }
    else {
      func_0052FBA0(*DAT_00360aa0 + 0x3dbbc,*(uint *)(param_2 + 0x28));
      piVar2 = DAT_00360aa4;
      iVar4 = func_005568E8(*DAT_00360aa4);
      if ((*(int *)(param_2 + 0x34) == 0) || (*(short *)(*(int *)(param_2 + 0x34) + 10) != 4)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(int *)(param_2 + 0x28) != iVar4) {
        return 1;
      }
      if ((!bVar1) && (*(uint *)(param_1 + 0x494) <= *(uint *)(param_1 + 0x490))) {
        iVar4 = func_005569D4(*piVar2,(float *)(*(int *)(param_1 + 0x434) + 0x24),
                              (float *)(param_2 + 0x10),*(uint *)(*(int *)(param_1 + 0x438) + 0x2c),
                              0);
        uVar3 = DAT_00360aa8;
        if (iVar4 == 0) {
          if ((*(char *)(param_1 + 0x410) != '\x02') &&
             ((*(uint *)(param_2 + 0x24) & 0x400000) == 0)) {
            if (*(char *)(param_1 + 0x410) == '\x06') {
              return 1;
            }
            func_00666D48(puVar5,6);
            return 1;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x494) = 5;
          *(undefined4 *)(param_1 + 0x498) = uVar3;
          *(undefined4 *)(param_1 + 0x490) = 0;
          func_00666D48(puVar5,3);
        }
      }
    }
  }
  return 0;
}

