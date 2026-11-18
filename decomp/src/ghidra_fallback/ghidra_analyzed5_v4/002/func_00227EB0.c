#include "ghidra_types.h"

extern int func_002255D0(int param_1,uint param_2,int param_3,int param_4,float fparam_0,float fparam_1);
extern float DAT_00228094;

// USA 00227EB0 <- EU 00227EB0 (Ghidra, non-matching)
// GLOBAL DAT_00228094 float

undefined4 func_00227EB0(int param_1,float fparam_0,float fparam_1)

{
  char cVar1;
  float fVar2;
  
  cVar1 = *(char *)(param_1 + 0x73c);
  if (cVar1 == '\x04') {
    fVar2 = DAT_00228094;
    func_002255D0(param_1,*(uint *)(param_1 + 0x6b0),*(int *)(param_1 + 0x6dc),1,fparam_0,fparam_1);
    func_002255D0(param_1,*(uint *)(param_1 + 0x6b4),*(int *)(param_1 + 0x6e0),0,fVar2,fVar2);
    func_002255D0(param_1,*(uint *)(param_1 + 0x6b8),*(int *)(param_1 + 0x6e4),0,fVar2,fVar2);
    func_002255D0(param_1,*(uint *)(param_1 + 0x6bc),*(int *)(param_1 + 0x6e8),0,fVar2,fVar2);
    return func_002255D0(param_1,*(uint *)(param_1 + 0x6c0),*(int *)(param_1 + 0x6ec),0,fVar2,fVar2);
  }
  if (cVar1 == '\x03') {
    fVar2 = DAT_00228094;
    func_002255D0(param_1,*(uint *)(param_1 + 0x6b4),*(int *)(param_1 + 0x6e0),1,fparam_0,fparam_1);
    func_002255D0(param_1,*(uint *)(param_1 + 0x6b8),*(int *)(param_1 + 0x6e4),0,fVar2,fVar2);
    func_002255D0(param_1,*(uint *)(param_1 + 0x6bc),*(int *)(param_1 + 0x6e8),0,fVar2,fVar2);
    return func_002255D0(param_1,*(uint *)(param_1 + 0x6c0),*(int *)(param_1 + 0x6ec),0,fVar2,fVar2);
  }
  if (cVar1 == '\x02') {
    fVar2 = DAT_00228094;
    func_002255D0(param_1,*(uint *)(param_1 + 0x6b8),*(int *)(param_1 + 0x6e4),1,fparam_0,fparam_1);
    func_002255D0(param_1,*(uint *)(param_1 + 0x6bc),*(int *)(param_1 + 0x6e8),0,fVar2,fVar2);
    return func_002255D0(param_1,*(uint *)(param_1 + 0x6c0),*(int *)(param_1 + 0x6ec),0,fVar2,fVar2);
  }
  if (cVar1 != '\x01') {
    return func_002255D0(param_1,*(uint *)(param_1 + 0x6c0),*(int *)(param_1 + 0x6ec),1,DAT_00228094,
                  DAT_00228094);
  }
  fVar2 = DAT_00228094;
  func_002255D0(param_1,*(uint *)(param_1 + 0x6bc),*(int *)(param_1 + 0x6e8),1,fparam_0,fparam_1);
  return func_002255D0(param_1,*(uint *)(param_1 + 0x6c0),*(int *)(param_1 + 0x6ec),0,fVar2,fVar2);
}

