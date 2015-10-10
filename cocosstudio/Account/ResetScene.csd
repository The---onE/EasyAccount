<GameProjectFile>
  <PropertyGroup Type="Scene" Name="ResetScene" ID="4c2dd6da-7f54-4a49-891e-ef79c3233f36" Version="2.1.5.0" />
  <Content ctype="GameProjectContent">
    <Content>
      <Animation Duration="0" Speed="1.0000" />
      <ObjectData Name="ResetScene" FrameEvent="" CustomClassName="ManageScene" Tag="17" ctype="SingleNodeObjectData">
        <Position X="0.0000" Y="0.0000" />
        <Scale ScaleX="1.0000" ScaleY="1.0000" />
        <AnchorPoint />
        <CColor A="255" R="255" G="255" B="255" />
        <Size X="768.0000" Y="1024.0000" />
        <PrePosition X="0.0000" Y="0.0000" />
        <PreSize X="0.0000" Y="0.0000" />
        <Children>
          <NodeObjectData Name="Text_1" ActionTag="1698122342" FrameEvent="" Tag="18" LeftMargin="24.0000" RightMargin="24.0000" TopMargin="234.0000" BottomMargin="710.0000" FontSize="80" LabelText="确定要重置数据吗？" ctype="TextObjectData">
            <Position X="384.0000" Y="750.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="720.0000" Y="80.0000" />
            <PrePosition X="0.5000" Y="0.7324" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
          <NodeObjectData Name="Text_2" ActionTag="1353621025" FrameEvent="" Tag="19" LeftMargin="-116.0000" RightMargin="-116.0000" TopMargin="274.0000" BottomMargin="550.0000" FontSize="100" LabelText="重置数据会导致所有&#xA;账单清空，请谨慎操作" ctype="TextObjectData">
            <Position X="384.0000" Y="650.0000" />
            <Scale ScaleX="0.5000" ScaleY="0.5000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="1000.0000" Y="200.0000" />
            <PrePosition X="0.5000" Y="0.6348" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
          <NodeObjectData Name="Text_3" ActionTag="418435941" FrameEvent="" Tag="20" LeftMargin="-116.0000" RightMargin="-116.0000" TopMargin="374.0000" BottomMargin="450.0000" FontSize="100" LabelText="为防止误操作，请在&#xA;下方输入框中输入&quot;OK&quot;" ctype="TextObjectData">
            <Position X="384.0000" Y="550.0000" />
            <Scale ScaleX="0.5000" ScaleY="0.5000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="1000.0000" Y="200.0000" />
            <PrePosition X="0.5000" Y="0.5371" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
          <NodeObjectData Name="text" ActionTag="-205069169" FrameEvent="" Tag="21" LeftMargin="264.0000" RightMargin="264.0000" TopMargin="534.0000" BottomMargin="410.0000" TouchEnable="True" FontSize="80" IsCustomSize="True" LabelText="" PlaceHolderText="输入框" MaxLengthText="10" ctype="TextFieldObjectData">
            <Position X="384.0000" Y="450.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="240.0000" Y="80.0000" />
            <PrePosition X="0.5000" Y="0.4395" />
            <PreSize X="0.3125" Y="0.0781" />
          </NodeObjectData>
          <NodeObjectData Name="ok" ActionTag="1469908914" FrameEvent="" CallBackType="Click" CallBackName="resetOkClick" Tag="22" LeftMargin="154.0000" RightMargin="414.0000" TopMargin="624.0000" BottomMargin="300.0000" TouchEnable="True" FontSize="80" ButtonText="确定" Scale9Enable="True" Scale9Width="46" Scale9Height="36" ctype="ButtonObjectData">
            <Position X="354.0000" Y="350.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <AnchorPoint ScaleX="1.0000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="200.0000" Y="100.0000" />
            <PrePosition X="0.4609" Y="0.3418" />
            <PreSize X="0.2604" Y="0.0977" />
            <TextColor A="255" R="65" G="65" B="70" />
            <DisabledFileData Type="Default" Path="Default/Button_Disable.png" />
            <PressedFileData Type="Default" Path="Default/Button_Press.png" />
            <NormalFileData Type="Default" Path="Default/Button_Normal.png" />
          </NodeObjectData>
          <NodeObjectData Name="cancel" ActionTag="1155175980" FrameEvent="" CallBackType="Click" CallBackName="resetCancelClick" Tag="23" LeftMargin="414.0000" RightMargin="154.0000" TopMargin="624.0000" BottomMargin="300.0000" TouchEnable="True" FontSize="100" ButtonText="取消" Scale9Enable="True" Scale9Width="46" Scale9Height="36" ctype="ButtonObjectData">
            <Position X="414.0000" Y="350.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <AnchorPoint ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="200.0000" Y="100.0000" />
            <PrePosition X="0.5391" Y="0.3418" />
            <PreSize X="0.2604" Y="0.0977" />
            <TextColor A="255" R="65" G="65" B="70" />
            <DisabledFileData Type="Default" Path="Default/Button_Disable.png" />
            <PressedFileData Type="Default" Path="Default/Button_Press.png" />
            <NormalFileData Type="Default" Path="Default/Button_Normal.png" />
          </NodeObjectData>
        </Children>
      </ObjectData>
    </Content>
  </Content>
</GameProjectFile>