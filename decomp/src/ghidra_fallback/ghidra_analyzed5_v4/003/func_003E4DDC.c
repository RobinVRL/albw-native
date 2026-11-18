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
extern int func_001093C0(void);
extern int func_0010AA9C(void);
extern int func_0010AB0C(void);
extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern int func_003E3744(void);
extern int func_003E4470(void);
extern int func_003E5858(uint param_1);
extern int func_003E59EC(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4);
extern uint DAT_003e4f84;
extern int DAT_003e4f88;
extern uint DAT_003e4f8c;
extern uint DAT_003e4f90;
extern uint DAT_003e4f94;
extern uint DAT_003e4f98;

// USA 003E4DDC <- EU 003E4DBC (Ghidra, non-matching)
// GLOBAL DAT_003e4f84 uint
// GLOBAL DAT_003e4f88 int
// GLOBAL DAT_003e4f8c uint
// GLOBAL DAT_003e4f90 uint
// GLOBAL DAT_003e4f94 uint
// GLOBAL DAT_003e4f98 uint

uint func_003E4DDC(uint param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  bVar4 = func_00102A8C();
  if ((bVar4) || (bVar4 = func_001049BC(), uVar7 = DAT_003e4f84, bVar4)) {
    bVar4 = func_001049BC();
    if (bVar4) {
      func_001052FC(0);
    }
    else {
      bVar4 = func_00102A8C();
      iVar6 = DAT_003e4f88;
      if (bVar4) {
        *(undefined1 *)(DAT_003e4f88 + 1) = 1;
        func_003E3744();
        iVar5 = func_0010AA9C();
        if (iVar5 != 0) {
          func_0010AB0C();
          *(undefined1 *)(iVar6 + 4) = 1;
        }
        func_001052FC(0);
        func_001093C0();
      }
    }
    iVar6 = func_003E4470();
    uVar1 = DAT_003e4f94;
    uVar2 = DAT_003e4f90;
    uVar3 = DAT_003e4f8c;
    if (iVar6 != 0) {
      func_0010173C(1);
      uVar1 = DAT_003e4f94;
      uVar2 = DAT_003e4f90;
      uVar3 = DAT_003e4f8c;
    }
    while( true ) {
      func_00108DF8();
      uVar7 = func_003E59EC(param_1,param_2,param_3,param_4);
      func_00108F4C();
      if ((uVar7 != uVar3 && uVar7 != uVar2) && uVar7 != uVar1) break;
      func_00104338((uint)((ulonglong)DAT_003e4f98 * 10),(int)((ulonglong)DAT_003e4f98 * 10 >> 0x20)
                   );
    }
    if (iVar6 == 0) {
      iVar6 = func_003E4470();
      if (iVar6 != 0) {
        func_0010173C(1);
      }
    }
    else {
      iVar6 = func_003E4470();
      if (iVar6 == 0) {
        func_00102A2C(1);
      }
    }
    if ((int)uVar7 < 0) {
      func_0010AC24(uVar7,0x3e4f30);
    }
    func_001052E8();
    bVar4 = func_00102A8C();
    if (bVar4) {
      uVar7 = func_003E5858(param_1);
    }
    bVar4 = func_001049BC();
    if (bVar4) {
      software_interrupt(3);
    }
  }
  return uVar7;
}

