#include "ghidra_types.h"

extern int func_00103C68(undefined4 *param_1,undefined4 param_2);
extern int func_00104164(undefined4 *param_1,int param_2);
extern int func_00104248(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5 ,uint param_6,undefined4 param_7,int param_8);
extern int func_0010A98C(uint param_1);
extern uint *DAT_00102dd4;
extern uint DAT_00102dd8;
extern undefined4 *DAT_00102ddc;
extern undefined1 *DAT_00102de0;
extern undefined4 DAT_00102de4;
extern uint DAT_00102de8;
extern undefined4 DAT_00102dec;
extern undefined4 DAT_00102df0;
extern undefined4 DAT_00102df4;

// USA 00102C40 <- EU 00102C40 (Ghidra, non-matching)
// GLOBAL DAT_00102dd4 uint *
// GLOBAL DAT_00102dd8 uint
// GLOBAL DAT_00102ddc undefined4 *
// GLOBAL DAT_00102de0 undefined1 *
// GLOBAL DAT_00102de4 undefined4
// GLOBAL DAT_00102de8 uint
// GLOBAL DAT_00102dec undefined4
// GLOBAL DAT_00102df0 undefined4
// GLOBAL DAT_00102df4 undefined4

/* WARNING: Variable defined which should be unmapped: objStack_48 */

void func_00102C40(uint param_1,int param_2,int param_3)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_48 ((uint *)(albw_frame + 0x8))
  #define local_38 (*(int *)(albw_frame + 0x18))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x24))
  #define auStack_28 ((undefined4 *)(albw_frame + 0x28))
  uVar4 = DAT_00102dd8;
  puVar1 = DAT_00102dd4;
  objStack_48[0] = 0;
  puVar5 = DAT_00102dd4 + 1;
  uVar3 = DAT_00102dd8;
  if ((DAT_00102dd4[1] == 0) && (uVar3 = func_00103C68(objStack_48,0), -1 < (int)uVar3)) {
    *puVar5 = objStack_48[0];
    uVar3 = 0;
  }
  if ((int)uVar3 < 0) {
    func_0010A98C(uVar3);
  }
  if (puVar1[1] != 0) {
    software_interrupt(0x23);
    puVar1[1] = 0;
  }
  puVar1[1] = param_2;
  objStack_48[0] = 0;
  uVar3 = uVar4;
  if ((*puVar1 == 0) && (uVar3 = func_00103C68(objStack_48,0), -1 < (int)uVar3)) {
    *puVar1 = objStack_48[0];
    uVar3 = 0;
  }
  if ((int)uVar3 < 0) {
    func_0010A98C(uVar3);
  }
  if (*DAT_00102dd4 != 0) {
    software_interrupt(0x23);
    *DAT_00102dd4 = 0;
  }
  *DAT_00102dd4 = param_3;
  objStack_48[0] = 0;
  if ((puVar1[2] == 0) && (uVar4 = func_00103C68(objStack_48,0), -1 < (int)uVar4)) {
    uVar4 = 0;
    puVar1[2] = objStack_48[0];
  }
  if ((int)uVar4 < 0) {
    func_0010A98C(uVar4);
  }
  func_00104164(DAT_00102ddc,1);
  objStack_48[0] = DAT_00102de8;
  puVar2 = DAT_00102de0;
  *DAT_00102de0 = 0;
  local_38 = 4;
  local_34 = DAT_00102dec;
  local_30 = DAT_00102df0;
  uStack_2c = DAT_00102df4;
  auStack_28[0] = 0;
  objStack_48[2] = 0xfffffffe;
  objStack_48[3] = 0;
  objStack_48[1] = param_1;
  uVar4 = func_00104248((undefined4 *)(puVar2 + 0xc),&local_38,DAT_00102de4,auStack_28,
                        objStack_48[0],param_1,0xfffffffe,0);
  if ((int)uVar4 < 0) {
    func_0010A98C(uVar4);
  }
  return;
}

