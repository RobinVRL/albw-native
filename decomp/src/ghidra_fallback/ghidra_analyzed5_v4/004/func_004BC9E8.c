#include "ghidra_types.h"

extern int func_0014E138(int param_1,int param_2);
extern int func_004BDBAC(int param_1,int param_2);
extern int func_004BF874(int param_1,float *param_2,int param_3);
extern int func_004C06FC(int param_1,int param_2,int param_3);

// USA 004BC9E8 <- EU 004BC9C0 (Ghidra, non-matching)

undefined4 func_004BC9E8(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  
  func_0014E138(param_1,param_2);
  uVar2 = param_1 + 0x800;
  bVar3 = *(char *)(param_1 + 0x860) == '\0';
  if (bVar3) {
    uVar2 = (uint)*(byte *)(param_1 + 0x85e);
  }
  if ((bVar3 && uVar2 == 0) && (*(char *)(param_1 + 0x915) == '\0')) {
    cVar1 = *(char *)(param_1 + 0x912);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        if (*(int *)(param_1 + 0x7a4) != 0) {
          func_004C06FC(param_1,*(int *)(param_1 + 0x7a4),*(int *)(param_1 + 0x8fc));
          *(undefined1 *)(param_1 + 0x912) = 2;
        }
      }
      else if (cVar1 == '\x02') {
        *(undefined1 *)(param_1 + 0x912) = 1;
      }
    }
    if ((*(char *)(param_1 + 0x910) == '\x02') &&
       (cVar1 = *(char *)(param_1 + 0x913), cVar1 != '\0')) {
      if (cVar1 == '\x01') {
        func_004BF874(param_1,(float *)(param_1 + 0x3d0),1);
        return func_004BDBAC(param_1,0);
      }
      if (cVar1 == '\x02') {
        *(undefined1 *)(param_1 + 0x913) = 1;
      }
    }
  }
  return 0;
}

