#include "ghidra_types.h"

extern int func_004BDA28(int *param_1);
extern int func_004C01E4(undefined4 *param_1);
extern int func_004C1418(int *param_1,int param_2);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int DAT_006159a4;
extern float DAT_006159a8;

// USA 006158D0 <- EU 006158A8 (Ghidra, non-matching)
// GLOBAL DAT_006159a4 int
// GLOBAL DAT_006159a8 float

undefined4 func_006158D0(int *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (char)param_1[0x262];
  if (cVar1 == '\0') {
    if ((((param_1[0x22b] & 0x10U) == 0) && ((char)param_1[0x216] != '\x01')) &&
       ((ushort)*(byte *)((int)param_1 + 0x852) != *(ushort *)(DAT_006159a4 + (int)param_1))) {
      iVar2 = func_0051D2F4(param_1 + 0xfa,param_1[0x206],param_1[0x24e],param_1[0x24f],DAT_006159a8
                           );
      if (iVar2 != 0) {
        *(char *)(param_1 + 0x262) = (char)param_1[0x262] + '\x01';
                    /* WARNING: Could not recover jumptable at 0x006159a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        return (**(code **)(*param_1 + 0xac))(param_1,*(undefined1 *)((int)param_1 + 0x855),0xffffffff);
      }
    }
    else {
      if (*(char *)((int)param_1 + 0x852) == (char)param_1[0x215]) {
        (**(code **)(*param_1 + 0xac))(param_1,*(undefined1 *)((int)param_1 + 0x855),0xffffffff);
      }
      *(char *)(param_1 + 0x262) = (char)param_1[0x262] + '\x01';
    }
  }
  else if (cVar1 == '\x01' || cVar1 == '\x02') {
    func_004C1418(param_1,(uint)(cVar1 == '\x01'));
    func_004BDA28(param_1);
    return func_004C01E4(param_1);
  }
  return 0;
}

