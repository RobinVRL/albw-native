#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_00599124;
extern undefined4 *DAT_00599128;
extern undefined4 *DAT_0059912c;
extern undefined DAT_00599130;
extern undefined4 DAT_00599138;
extern undefined DAT_0059913c;
extern undefined4 DAT_00599144;
extern undefined4 DAT_00599148;
extern undefined4 *DAT_0059914c;
extern undefined DAT_00599150;
extern uint *DAT_00599160;
extern undefined4 DAT_00599164;
extern undefined4 *DAT_00599168;
extern undefined4 DAT_0059916c;
extern undefined4 *DAT_00599170;
extern undefined DAT_00599174;
extern uint *DAT_00599190;
extern undefined4 *DAT_00599194;
extern char s_MojLargeRaft_00599180[];
extern char s_MojRaft_00599158[];

// USA 00599018 <- EU 00598FF0 (Ghidra, non-matching)
// GLOBAL DAT_00599124 int
// GLOBAL DAT_00599128 undefined4 *
// GLOBAL DAT_0059912c undefined4 *
// GLOBAL DAT_00599130 undefined
// GLOBAL DAT_00599138 undefined4
// GLOBAL DAT_0059913c undefined
// GLOBAL DAT_00599144 undefined4
// GLOBAL DAT_00599148 undefined4
// GLOBAL DAT_0059914c undefined4 *
// GLOBAL DAT_00599150 undefined
// GLOBAL DAT_00599160 uint *
// GLOBAL DAT_00599164 undefined4
// GLOBAL DAT_00599168 undefined4 *
// GLOBAL DAT_0059916c undefined4
// GLOBAL DAT_00599170 undefined4 *
// GLOBAL DAT_00599174 undefined
// GLOBAL DAT_00599190 uint *
// GLOBAL DAT_00599194 undefined4 *
// GLOBAL s_MojLargeRaft_00599180 string
// GLOBAL s_MojRaft_00599158 string

undefined8 func_00599018(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  iVar1 = DAT_00599124;
  *(undefined4 *)(DAT_00599124 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  uVar3 = DAT_00599138;
  puVar2 = DAT_00599128;
  *DAT_00599128 = 0;
  puVar2[1] = 0;
  puVar2 = DAT_0059912c;
  DAT_0059912c[1] = &DAT_00599130;
  *puVar2 = uVar3;
  puVar2[2] = uVar3;
  puVar2[3] = &DAT_0059913c;
  puVar2 = DAT_0059914c;
  puVar4 = DAT_0059914c + 3;
  DAT_0059914c[1] = 5;
  puVar2[2] = puVar4;
  *puVar2 = 0;
  local_24 = &DAT_00599150;
  local_2c = s_MojRaft_00599158;
  local_28 = uVar3;
  local_30 = uVar3;
  func_0019B51C(DAT_00599168,DAT_00599164,*DAT_00599160,(int)&local_30,DAT_0059914c,&local_28,0);
  puVar2 = DAT_00599170;
  puVar4 = DAT_00599170 + 3;
  DAT_00599170[1] = 5;
  puVar2[2] = puVar4;
  *puVar2 = 0;
  local_14 = &DAT_00599174;
  local_1c = s_MojLargeRaft_00599180;
  local_18 = uVar3;
  local_20 = uVar3;
  uVar3 = func_0019B51C(DAT_00599194,DAT_00599164,*DAT_00599190,(int)&local_20,DAT_00599170,
                        &local_18,0);
  return CONCAT44(DAT_0059916c,uVar3);
}

