#include "ghidra_types.h"

extern int func_002AD658(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined1 param_5,int param_6);
extern int func_002ADE0C(int param_1,int param_2);
extern int func_004F7CE4(int param_1);
extern float func_004FB2F0(int param_1,float fparam_0);
extern int func_004FCD5C(int param_1,int param_2);
extern int func_004FCDF4(int param_1,int param_2);

// USA 002B1638 <- EU 002B1614 (Ghidra, non-matching)

undefined4 func_002B1638(int param_1,byte param_2)

{
  int iVar1;
  float in_s0;
  
  if (*(char *)(param_1 + 100) != '\0') {
    *(undefined1 *)(param_1 + 100) = 0;
    func_004F7CE4(*(int *)(param_1 + 0x34));
    iVar1 = *(int *)(param_1 + 0x34);
    *(uint *)(iVar1 + 0x59c) = *(uint *)(iVar1 + 0x59c) & 0xfffffffe;
    func_004FCD5C(iVar1 + 0x5a8,0);
    iVar1 = *(int *)(param_1 + 0x34);
    *(uint *)(iVar1 + 0x59c) = *(uint *)(iVar1 + 0x59c) & 0xfffffffd;
    func_004FCDF4(iVar1 + 0x5a8,0);
  }
  func_002ADE0C(param_1,(uint)param_2);
  func_004FB2F0(*(int *)(param_1 + 0x34),in_s0);
  *(undefined1 *)(*(int *)(param_1 + 0x34) + 0x655) =
       *(undefined1 *)(*(int *)(param_1 + 0x34) + 0x654);
  return func_002AD658(param_1,0x1e,(uint)param_2,(int)*(char *)(param_1 + 0x110),
                *(undefined1 *)(param_1 + 0x111),1);
}

