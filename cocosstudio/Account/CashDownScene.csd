<GameProjectFile>
  <PropertyGroup Type="Scene" Name="CashDownScene" ID="fd0c91d7-04d0-439a-bad6-3688d226fc42" Version="2.1.5.0" />
  <Content ctype="GameProjectContent">
    <Content>
      <Animation Duration="0" Speed="1.0000" />
      <ObjectData Name="CashDownScene" FrameEvent="" CustomClassName="ManageScene" ctype="SingleNodeObjectData">
        <Position X="0.0000" Y="0.0000" />
        <Scale ScaleX="1.0000" ScaleY="1.0000" />
        <AnchorPoint />
        <CColor A="255" R="255" G="255" B="255" />
        <Size X="768.0000" Y="1024.0000" />
        <PrePosition X="0.0000" Y="0.0000" />
        <PreSize X="0.0000" Y="0.0000" />
        <Children>
          <NodeObjectData Name="text" ActionTag="-1119750715" FrameEvent="" Tag="67" LeftMargin="184.0000" RightMargin="184.0000" TopMargin="274.0000" BottomMargin="650.0000" FontSize="100" LabelText="现金支出" ctype="TextObjectData">
            <Position X="384.0000" Y="700.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="400.0000" Y="100.0000" />
            <PrePosition X="0.5000" Y="0.6836" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
          <NodeObjectData Name="classText" ActionTag="-1156563637" FrameEvent="" Tag="10" RightMargin="468.0000" TopMargin="374.0000" BottomMargin="550.0000" FontSize="100" LabelText="支出：" ctype="TextObjectData">
            <Position X="0.0000" Y="600.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="300.0000" Y="100.0000" />
            <PrePosition X="0.0000" Y="0.5859" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
          <NodeObjectData Name="class" ActionTag="1352909619" FrameEvent="" Tag="11" LeftMargin="168.0000" TopMargin="374.0000" BottomMargin="550.0000" TouchEnable="True" FontSize="100" IsCustomSize="True" LabelText="" PlaceHolderText="输入支出类型" MaxLengthEnable="True" MaxLengthText="6" ctype="TextFieldObjectData">
            <Position X="768.0000" Y="600.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleX="1.0000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="600.0000" Y="100.0000" />
            <PrePosition X="1.0000" Y="0.5859" />
            <PreSize X="0.7813" Y="0.0977" />
          </NodeObjectData>
          <NodeObjectData Name="numText" ActionTag="-673259166" FrameEvent="" Tag="12" RightMargin="468.0000" TopMargin="474.0000" BottomMargin="450.0000" FontSize="100" LabelText="金额：" ctype="TextObjectData">
            <Position X="0.0000" Y="500.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="300.0000" Y="100.0000" />
            <PrePosition X="0.0000" Y="0.4883" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
          <NodeObjectData Name="num" ActionTag="681894110" FrameEvent="" Tag="13" LeftMargin="168.0000" TopMargin="474.0000" BottomMargin="450.0000" TouchEnable="True" FontSize="100" IsCustomSize="True" LabelText="" PlaceHolderText="输入金额" MaxLengthEnable="True" MaxLengthText="6" ctype="TextFieldObjectData">
            <Position X="768.0000" Y="500.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleX="1.0000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="600.0000" Y="100.0000" />
            <PrePosition X="1.0000" Y="0.4883" />
            <PreSize X="0.7813" Y="0.0977" />
          </NodeObjectData>
          <NodeObjectData Name="ok" ActionTag="-1979162060" FrameEvent="" CallBackType="Click" CallBackName="cashDownClick" Tag="14" LeftMargin="304.0000" RightMargin="304.0000" TopMargin="584.0000" BottomMargin="360.0000" TouchEnable="True" FontSize="80" ButtonText="确定" Scale9Enable="True" Scale9Width="46" Scale9Height="36" ctype="ButtonObjectData">
            <Position X="384.0000" Y="400.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="160.0000" Y="80.0000" />
            <PrePosition X="0.5000" Y="0.3906" />
            <PreSize X="0.2083" Y="0.0781" />
            <TextColor A="255" R="65" G="65" B="70" />
            <DisabledFileData Type="Default" Path="Default/Button_Disable.png" />
            <PressedFileData Type="Default" Path="Default/Button_Press.png" />
            <NormalFileData Type="Default" Path="Default/Button_Normal.png" />
          </NodeObjectData>
          <NodeObjectData Name="lendCheck" ActionTag="817089363" FrameEvent="" Tag="62" RightMargin="688.0000" TopMargin="584.0000" BottomMargin="360.0000" TouchEnable="True" ctype="CheckBoxObjectData">
            <Position X="40.0000" Y="400.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="80.0000" Y="80.0000" />
            <PrePosition X="0.0521" Y="0.3906" />
            <PreSize X="0.1042" Y="0.0781" />
            <NormalBackFileData Type="Default" Path="Default/CheckBox_Normal.png" />
            <PressedBackFileData Type="Default" Path="Default/CheckBox_Press.png" />
            <DisableBackFileData Type="Default" Path="Default/CheckBox_Disable.png" />
            <NodeNormalFileData Type="Default" Path="Default/CheckBoxNode_Normal.png" />
            <NodeDisableFileData Type="Default" Path="Default/CheckBoxNode_Disable.png" />
          </NodeObjectData>
          <NodeObjectData Name="lendText" ActionTag="-1924825346" FrameEvent="" Tag="63" LeftMargin="70.0000" RightMargin="598.0000" TopMargin="574.0000" BottomMargin="350.0000" FontSize="100" LabelText="借" ctype="TextObjectData">
            <Position X="120.0000" Y="400.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="100.0000" Y="100.0000" />
            <PrePosition X="0.1563" Y="0.3906" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
        </Children>
      </ObjectData>
    </Content>
  </Content>
</GameProjectFile>