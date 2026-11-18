#include "ghidra_types.h"

extern int func_0010173C(int param_1);
extern int func_00102A2C(int param_1);
extern int func_00102A8C(void);
extern int func_00104338(uint param_1,int param_2);
extern int func_001049BC(void);
extern int func_001052E8(void);
extern int func_001052FC(int param_1);
extern int func_00108DF8(void);
extern int func_00108F4C(void);
extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern int func_003E3744(void);
extern int func_003E4470(void);
extern int func_003E4700(uint param_1);
extern int func_003E5A3C(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4);
extern uint DAT_003e50e8;
extern int DAT_003e50ec;
extern uint DAT_003e50f0;
extern uint DAT_003e50f4;
extern uint DAT_003e50f8;
extern uint DAT_003e50fc;

// USA 003E4FBC <- EU 003E4F9C (Ghidra, non-matching)
// GLOBAL DAT_003e50e8 uint
// GLOBAL DAT_003e50ec int
// GLOBAL DAT_003e50f0 uint
// GLOBAL DAT_003e50f4 uint
// GLOBAL DAT_003e50f8 uint
// GLOBAL DAT_003e50fc uint

uint func_003E4FBC(uint param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  bVar4 = func_00102A8C();
  if ((bVar4) || (bVar4 = func_001049BC(), uVar6 = DAT_003e50e8, bVar4)) {
    bVar4 = func_00102A8C();
    if (bVar4) {
      *(undefined1 *)(DAT_003e50ec + 1) = 1;
      func_003E3744();
    }
    func_003E4700(param_1);
    func_001052FC(0);
    iVar5 = func_003E4470();
    uVar1 = DAT_003e50f8;
    uVar2 = DAT_003e50f4;
    uVar3 = DAT_003e50f0;
    if (iVar5 != 0) {
      func_0010173C(1);
      uVar1 = DAT_003e50f8;
      uVar2 = DAT_003e50f4;
      uVar3 = DAT_003e50f0;
    }
    while( true ) {
      func_00108DF8();
      uVar6 = func_003E5A3C(param_1,param_2,param_3,param_4);
      func_00108F4C();
      if ((uVar6 != uVar3 && uVar6 != uVar2) && uVar6 != uVar1) break;
      func_00104338((uint)((ulonglong)DAT_003e50fc * 10),(int)((ulonglong)DAT_003e50fc * 10 >> 0x20)
                   );
    }
    if (iVar5 == 0) {
      iVar5 = func_003E4470();
      if (iVar5 != 0) {
        func_0010173C(1);
      }
    }
    else {
      iVar5 = func_003E4470();
      if (iVar5 == 0) {
        func_00102A2C(1);
      }
    }
    if ((int)uVar6 < 0) {
      func_0010AC24(uVar6,0x3e50cc);
    }
    func_001052E8();
  }
  return uVar6;
}

