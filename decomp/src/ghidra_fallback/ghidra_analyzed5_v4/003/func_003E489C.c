// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00102A8C(void);
extern int func_00104338(uint param_1,int param_2);
extern int func_001052E8(void);
extern int func_001052FC(int param_1);
extern int func_001058A8(undefined4 param_1,undefined1 *param_2);
extern int func_0010873C(uint param_1,undefined4 param_2);
extern int func_00108DF8(void);
extern int func_00108F4C(void);
extern int func_001093C0(void);
extern int func_0010AA9C(void);
extern int func_0010AB0C(void);
extern int func_003E3744(void);
extern int func_003E5858(uint param_1);
extern int func_003E5928(undefined4 param_1,int param_2,undefined4 param_3);
extern int func_003E597C(undefined1 param_1,undefined1 *param_2,undefined4 *param_3,undefined4 *param_4, undefined4 *param_5);
extern int DAT_003e49bc;
extern uint DAT_003e49c0;

// USA 003E489C <- EU 003E487C (Ghidra, non-matching)
// GLOBAL DAT_003e49bc int
// GLOBAL DAT_003e49c0 uint

/* WARNING: Variable defined which should be unmapped: objStack_30 */

uint func_003E489C(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_30 ((uint *)(albw_frame + 0x0))
  #define local_2c (*(uint *)(albw_frame + 0x4))
  #define auStack_28 ((undefined1 *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  func_00108DF8();
  objStack_30[0] = (uint)&uStack_20;
  uVar3 = func_003E597C(0xff,auStack_28,&uStack_24,&local_2c,(undefined4 *)objStack_30[0]);
  if ((int)uVar3 < 0) {
    func_0010873C(uVar3,0x3e48b8);
  }
  func_00108F4C();
  bVar2 = func_00102A8C();
  iVar1 = DAT_003e49bc;
  if (bVar2) {
    while( true ) {
      func_00108DF8();
      uVar3 = func_001058A8(local_2c,(undefined1 *)objStack_30);
      if ((int)uVar3 < 0) {
        func_0010873C(uVar3,0x3e48f4);
      }
      func_00108F4C();
      if ((char)objStack_30[0] != '\0') break;
      func_00104338(DAT_003e49c0,0);
    }
    *(undefined1 *)(iVar1 + 1) = 1;
    func_003E3744();
    func_003E5858(local_2c);
  }
  iVar4 = func_0010AA9C();
  if (iVar4 != 0) {
    func_0010AB0C();
    *(undefined1 *)(iVar1 + 4) = 1;
  }
  func_001052FC(0);
  func_001093C0();
  func_00108DF8();
  uVar3 = func_003E5928(param_1,param_2,param_3);
  if ((int)uVar3 < 0) {
    func_0010873C(uVar3,0x3e497c);
  }
  func_00108F4C();
  func_001052E8();
  return uVar3;
}

