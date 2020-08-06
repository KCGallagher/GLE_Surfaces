  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 43;
      section.data(43)  = dumData; %prealloc
      
	  ;% rtP.seed_values_1
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.UniformRandomNumberx_Minimum
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 40;
	
	  ;% rtP.UniformRandomNumberx_Maximum
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 41;
	
	  ;% rtP.UniformRandomNumberx_Seed
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 42;
	
	  ;% rtP.UniformRandomNumbery_Minimum
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 52;
	
	  ;% rtP.UniformRandomNumbery_Maximum
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 53;
	
	  ;% rtP.UniformRandomNumbery_Seed
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 54;
	
	  ;% rtP.celldimx_Value
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 64;
	
	  ;% rtP.celldimy_Value
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 74;
	
	  ;% rtP.DiscreteTimeIntegrator2_gainval
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 84;
	
	  ;% rtP.DiscreteTimeIntegrator2_IC
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 85;
	
	  ;% rtP.DiscreteTimeIntegrator1_gainval
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 86;
	
	  ;% rtP.DiscreteTimeIntegrator1_IC
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 87;
	
	  ;% rtP.DiscreteTimeIntegrator2_gainval_iujtnnssqz
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 88;
	
	  ;% rtP.DiscreteTimeIntegrator2_IC_j4tad5ykz4
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 89;
	
	  ;% rtP.DiscreteTimeIntegrator1_gainval_ddvop3rvnp
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 90;
	
	  ;% rtP.DiscreteTimeIntegrator1_IC_l2ngdxqqv3
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 91;
	
	  ;% rtP.forceX_tableData
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 92;
	
	  ;% rtP.forceX_bp01Data
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 1592;
	
	  ;% rtP.forceX_bp02Data
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 1642;
	
	  ;% rtP.forceY_tableData
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 1672;
	
	  ;% rtP.forceY_bp01Data
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 3172;
	
	  ;% rtP.forceY_bp02Data
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 3222;
	
	  ;% rtP.WhiteNoise_Mean
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 3252;
	
	  ;% rtP.WhiteNoise_StdDev
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 3253;
	
	  ;% rtP.Output_Gain
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 3254;
	
	  ;% rtP.DiscreteTimeIntegrator3_gainval
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 3255;
	
	  ;% rtP.DiscreteTimeIntegrator3_IC
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 3256;
	
	  ;% rtP.DataStoreMemory_InitialValue
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 3257;
	
	  ;% rtP.A_Value
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 3277;
	
	  ;% rtP.celldim_Value
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 3281;
	
	  ;% rtP.celldim1_Value
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 3301;
	
	  ;% rtP.permvec_Value
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 3321;
	
	  ;% rtP.B_Value
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 3323;
	
	  ;% rtP.freeze_signal_Value
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 3327;
	
	  ;% rtP.ones_Value
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 3337;
	
	  ;% rtP.reset_signal_Value
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 3339;
	
	  ;% rtP.mass_Value
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 3349;
	
	  ;% rtP.zeros_Value
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 3350;
	
	  ;% rtP.ones_Value_oocx40lm3j
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 3370;
	
	  ;% rtP.mass_Value_bobjrwbmcw
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 3372;
	
	  ;% rtP.zeros_Value_cq0rpxk0gt
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 3373;
	
	  ;% rtP.Interactions_Value
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 3393;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.forceX_maxIndex
	  section.data(1).logicalSrcIdx = 43;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.forceY_maxIndex
	  section.data(2).logicalSrcIdx = 44;
	  section.data(2).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 3;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 17;
      section.data(17)  = dumData; %prealloc
      
	  ;% rtB.gakbmbh2d2
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.fklh3xatdn
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 10;
	
	  ;% rtB.jkojapvkzw
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 20;
	
	  ;% rtB.gt11e00gkn
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 30;
	
	  ;% rtB.bkxfqi0pxq
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 40;
	
	  ;% rtB.a01jyq3kex
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 60;
	
	  ;% rtB.akgj1ibwf3
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 80;
	
	  ;% rtB.mnkabdxejs
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 100;
	
	  ;% rtB.h0heujskh3
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 120;
	
	  ;% rtB.ir0rpxetoe
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 140;
	
	  ;% rtB.f4djn03i2n
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 160;
	
	  ;% rtB.dv5qanofu3
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 170;
	
	  ;% rtB.bvw5c55uf3
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 190;
	
	  ;% rtB.jf2wd03mf3
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 194;
	
	  ;% rtB.heb4ixm4x3
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 214;
	
	  ;% rtB.nwccmbl3cd
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 218;
	
	  ;% rtB.jtfx14x1p1
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 238;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.ao1gmdn2dp
	  section.data(1).logicalSrcIdx = 17;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.mdsl05dmxi
	  section.data(2).logicalSrcIdx = 18;
	  section.data(2).dtTransOffset = 10;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.d1bg0wxfn3
	  section.data(1).logicalSrcIdx = 19;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 4;
    sectIdxOffset = 3;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% rtDW.kash4ux1pw
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.cfhfmokiqc
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 20;
	
	  ;% rtDW.dx3000kbdr
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 30;
	
	  ;% rtDW.btmvuptxgq
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 50;
	
	  ;% rtDW.bd5ggsd5xp
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 60;
	
	  ;% rtDW.kyo5azbgia
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 80;
	
	  ;% rtDW.ahvyf2z4j5
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 120;
	
	  ;% rtDW.jqip5ulbyv
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 140;
	
	  ;% rtDW.pksdb1tv2w
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 150;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% rtDW.odl14pd3py.FilePtr
	  section.data(1).logicalSrcIdx = 9;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.hgizhnb1sw.FilePtr
	  section.data(2).logicalSrcIdx = 10;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.cqmaavz11y.LoggedData
	  section.data(3).logicalSrcIdx = 11;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.nxv0llsori.LoggedData
	  section.data(4).logicalSrcIdx = 12;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.bvltoxi0lq.LoggedData
	  section.data(5).logicalSrcIdx = 13;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.lw42huz5gz.LoggedData
	  section.data(6).logicalSrcIdx = 14;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtDW.nkihzgokkq
	  section.data(1).logicalSrcIdx = 15;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.be0xujqbrq
	  section.data(2).logicalSrcIdx = 16;
	  section.data(2).dtTransOffset = 40;
	
	  ;% rtDW.dwhnbnorml
	  section.data(3).logicalSrcIdx = 17;
	  section.data(3).dtTransOffset = 50;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtDW.foaim50aii.Count
	  section.data(1).logicalSrcIdx = 18;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.dfdzh3eryc.Count
	  section.data(2).logicalSrcIdx = 19;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 3896388283;
  targMap.checksum1 = 3404973259;
  targMap.checksum2 = 478048312;
  targMap.checksum3 = 2804755132;

