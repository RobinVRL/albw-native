#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005e2ac4;
extern undefined4 *DAT_005e2ac8;
extern uint *DAT_005e2acc;
extern uint *DAT_005e2ad0;
extern uint *DAT_005e2ad4;
extern uint *DAT_005e2ad8;
extern uint *DAT_005e2adc;
extern undefined DAT_005e2ae0;
extern undefined4 DAT_005e2af0;
extern undefined4 DAT_005e2b08;
extern undefined4 DAT_005e2b0c;
extern undefined4 *DAT_005e2b10;
extern undefined4 DAT_005e2b14;
extern undefined4 DAT_005e2b18;
extern undefined4 *DAT_005e2b1c;
extern undefined DAT_005e2b20;
extern undefined4 DAT_005e2b44;
extern undefined4 *DAT_005e2b48;
extern undefined4 *DAT_005e2b4c;
extern undefined DAT_005e2b50;
extern undefined4 DAT_005e2b74;
extern undefined4 *DAT_005e2b78;
extern undefined4 *DAT_005e2b7c;
extern undefined DAT_005e2b80;
extern undefined4 DAT_005e2ba4;
extern undefined4 *DAT_005e2ba8;
extern char s_ObjEnemyFireBall_005e2af4[];
extern char s_ObjMedusaBall_005e2b34[];
extern char s_ObjWizFireBall_005e2b64[];
extern char s_ObjWizIceBall_005e2b94[];

// USA 005E28E4 <- EU 005E28BC (Ghidra, non-matching)
// GLOBAL DAT_005e2ac4 undefined4 *
// GLOBAL DAT_005e2ac8 undefined4 *
// GLOBAL DAT_005e2acc uint *
// GLOBAL DAT_005e2ad0 uint *
// GLOBAL DAT_005e2ad4 uint *
// GLOBAL DAT_005e2ad8 uint *
// GLOBAL DAT_005e2adc uint *
// GLOBAL DAT_005e2ae0 undefined
// GLOBAL DAT_005e2af0 undefined4
// GLOBAL DAT_005e2b08 undefined4
// GLOBAL DAT_005e2b0c undefined4
// GLOBAL DAT_005e2b10 undefined4 *
// GLOBAL DAT_005e2b14 undefined4
// GLOBAL DAT_005e2b18 undefined4
// GLOBAL DAT_005e2b1c undefined4 *
// GLOBAL DAT_005e2b20 undefined
// GLOBAL DAT_005e2b44 undefined4
// GLOBAL DAT_005e2b48 undefined4 *
// GLOBAL DAT_005e2b4c undefined4 *
// GLOBAL DAT_005e2b50 undefined
// GLOBAL DAT_005e2b74 undefined4
// GLOBAL DAT_005e2b78 undefined4 *
// GLOBAL DAT_005e2b7c undefined4 *
// GLOBAL DAT_005e2b80 undefined
// GLOBAL DAT_005e2ba4 undefined4
// GLOBAL DAT_005e2ba8 undefined4 *
// GLOBAL s_ObjEnemyFireBall_005e2af4 string
// GLOBAL s_ObjMedusaBall_005e2b34 string
// GLOBAL s_ObjWizFireBall_005e2b64 string
// GLOBAL s_ObjWizIceBall_005e2b94 string

undefined8 func_005E28E4(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 (*(char * *)(albw_frame + 0xc))
  #define local_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c (*(undefined * *)(albw_frame + 0x14))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(char * *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(undefined * *)(albw_frame + 0x24))
  #define local_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(char * *)(albw_frame + 0x2c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x30))
  #define local_2c (*(undefined * *)(albw_frame + 0x34))
  #define local_28 (*(undefined4 *)(albw_frame + 0x38))
  #define local_24 (*(char * *)(albw_frame + 0x3c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x40))
  #define local_1c (*(undefined * *)(albw_frame + 0x44))
  puVar1 = DAT_005e2ac4;
  *DAT_005e2ac4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar4 = DAT_005e2ad4;
  puVar1 = DAT_005e2ac8;
  *DAT_005e2ac8 = 0;
  puVar1[1] = 0;
  uVar7 = DAT_005e2af0;
  puVar6 = DAT_005e2adc;
  puVar5 = DAT_005e2ad8;
  puVar3 = DAT_005e2ad0;
  puVar2 = DAT_005e2acc;
  *DAT_005e2ad0 = *DAT_005e2acc;
  puVar3[1] = *puVar4;
  puVar3[2] = *puVar5;
  puVar3[3] = *puVar6;
  puVar3[4] = *puVar2;
  puVar3[-0x266] = (uint)(puVar3 + -0x265);
  puVar3[-0x267] = 5;
  puVar3[-0x268] = 0;
  local_4c = &DAT_005e2ae0;
  local_54 = s_ObjEnemyFireBall_005e2af4;
  local_50 = uVar7;
  local_58 = uVar7;
  func_0019B51C(DAT_005e2b10,DAT_005e2b0c,*puVar2,(int)&local_58,DAT_005e2b08,&local_50,0);
  puVar1 = DAT_005e2b1c;
  puVar8 = DAT_005e2b1c + 3;
  DAT_005e2b1c[1] = 5;
  puVar1[2] = puVar8;
  *puVar1 = 0;
  local_3c = &DAT_005e2b20;
  local_44 = s_ObjMedusaBall_005e2b34;
  local_40 = uVar7;
  local_48 = uVar7;
  func_0019B51C(DAT_005e2b48,DAT_005e2b44,*puVar4,(int)&local_48,DAT_005e2b1c,&local_40,0);
  puVar1 = DAT_005e2b4c;
  puVar8 = DAT_005e2b4c + 3;
  DAT_005e2b4c[1] = 5;
  puVar1[2] = puVar8;
  *puVar1 = 0;
  local_2c = &DAT_005e2b50;
  local_34 = s_ObjWizFireBall_005e2b64;
  local_30 = uVar7;
  local_38 = uVar7;
  func_0019B51C(DAT_005e2b78,DAT_005e2b74,*puVar5,(int)&local_38,DAT_005e2b4c,&local_30,0);
  puVar1 = DAT_005e2b7c;
  puVar8 = DAT_005e2b7c + 3;
  DAT_005e2b7c[1] = 5;
  puVar1[2] = puVar8;
  *puVar1 = 0;
  local_1c = &DAT_005e2b80;
  local_24 = s_ObjWizIceBall_005e2b94;
  local_20 = uVar7;
  local_28 = uVar7;
  uVar7 = func_0019B51C(DAT_005e2ba8,DAT_005e2ba4,*puVar6,(int)&local_28,DAT_005e2b7c,&local_20,0);
  return CONCAT44(DAT_005e2b18,uVar7);
}

