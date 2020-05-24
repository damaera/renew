open ReactNative;

let (>>=) = Belt.Option.flatMap;

[@react.component]
let make =
    /* flex */
    (
      ~alignContent=?,
      ~alignItems=?,
      ~alignSelf=?,
      ~flex=?,
      ~flexBasis=?,
      ~flexDirection=?,
      ~flexGrow=?,
      ~flexShrink=?,
      ~flexWrap=?,
      ~justifyContent=?,
      /* padding */
      ~p=?,
      ~pt=?,
      ~pr=?,
      ~pl=?,
      ~pb=?,
      ~pv=?,
      ~ph=?,
      ~pe=?,
      ~ps=?,
      /* margin */
      ~m=?,
      ~mt=?,
      ~mr=?,
      ~ml=?,
      ~mb=?,
      ~mv=?,
      ~mh=?,
      ~me=?,
      ~ms=?,
      /* position */
      ~position=?,
      ~top=?,
      ~right=?,
      ~left=?,
      ~bottom=?,
      ~start=?,
      ~end_=?,
      /* size */
      ~w=?,
      ~h=?,
      ~maxW=?,
      ~maxH=?,
      ~minW=?,
      ~minH=?,
      ~aspectRatio=?,
      /* bg */
      ~bg=?,
      /* opacity */
      ~opacity=?,
      /* borderWidth */
      ~borderWidth=?,
      ~borderTopWidth=?,
      ~borderRightWidth=?,
      ~borderBottomWidth=?,
      ~borderLeftWidth=?,
      ~borderStartWidth=?,
      ~borderEndWidth=?,
      /* borderRadius */
      ~borderRadius=?,
      ~borderTopRightRadius=?,
      ~borderTopLeftRadius=?,
      ~borderTopStartRadius=?,
      ~borderTopEndRadius=?,
      ~borderBottomRightRadius=?,
      ~borderBottomLeftRadius=?,
      ~borderBottomStartRadius=?,
      ~borderBottomEndRadius=?,
      /* borderColor */
      ~borderColor=?,
      ~borderTopColor=?,
      ~borderRightColor=?,
      ~borderBottomColor=?,
      ~borderLeftColor=?,
      ~borderStartColor=?,
      ~borderEndColor=?,
      /* overflow */
      ~overflow=?,
      /* zIndex */
      ~zIndex=?,
      /* direction */
      ~direction=?,
      /* rest */
      ~style=?,
      ~children=?,
    ) => {
  let pt_ = pt;

  let v = Style.viewStyle;

  let resolvedStyle =
    Style.arrayOption([|
      // flex
      alignContent >>= (a => Some(v(~alignContent=a, ()))),
      alignItems >>= (a => Some(v(~alignItems=a, ()))),
      alignSelf >>= (a => Some(v(~alignSelf=a, ()))),
      flex >>= (a => Some(v(~flex=a, ()))),
      flexBasis >>= (a => Some(v(~flexBasis=a, ()))),
      flexDirection >>= (a => Some(v(~flexDirection=a, ()))),
      flexGrow >>= (a => Some(v(~flex=a, ()))),
      flexShrink >>= (a => Some(v(~flexShrink=a, ()))),
      flexWrap >>= (a => Some(v(~flexWrap=a, ()))),
      justifyContent >>= (a => Some(v(~justifyContent=a, ()))),
      // padding
      p >>= (p => Some(v(~padding=p, ()))),
      pt_ >>= (pt_ => Some(v(~paddingTop=pt_, ()))), //
      pr >>= (pr => Some(v(~paddingRight=pr, ()))),
      pb >>= (pb => Some(v(~paddingBottom=pb, ()))),
      pl >>= (pl => Some(v(~paddingLeft=pl, ()))),
      pv >>= (pv => Some(v(~paddingVertical=pv, ()))),
      ph >>= (ph => Some(v(~paddingHorizontal=ph, ()))),
      pe >>= (pe => Some(v(~paddingStart=pe, ()))),
      ps >>= (ps => Some(v(~paddingEnd=ps, ()))),
      // margin
      m >>= (m => Some(v(~margin=m, ()))),
      mt >>= (mt => Some(v(~marginTop=mt, ()))),
      mr >>= (mr => Some(v(~marginRight=mr, ()))),
      mb >>= (mb => Some(v(~marginBottom=mb, ()))),
      ml >>= (ml => Some(v(~marginLeft=ml, ()))),
      mv >>= (mv => Some(v(~marginVertical=mv, ()))),
      mh >>= (mh => Some(v(~marginHorizontal=mh, ()))),
      me >>= (me => Some(v(~marginStart=me, ()))),
      ms >>= (ms => Some(v(~marginEnd=ms, ()))),
      // size
      w >>= (w => Some(v(~width=w, ()))),
      h >>= (h => Some(v(~height=h, ()))),
      maxW >>= (w => Some(v(~maxWidth=w, ()))),
      maxH >>= (h => Some(v(~maxHeight=h, ()))),
      minW >>= (w => Some(v(~minWidth=w, ()))),
      minH >>= (h => Some(v(~minHeight=h, ()))),
      aspectRatio >>= (a => Some(v(~aspectRatio=a, ()))),
      // position
      position >>= (p => Some(v(~position=p, ()))),
      top >>= (t => Some(v(~top=t, ()))),
      right >>= (r => Some(v(~right=r, ()))),
      bottom >>= (b => Some(v(~bottom=b, ()))),
      left >>= (l => Some(v(~left=l, ()))),
      start >>= (s => Some(v(~start=s, ()))),
      end_ >>= (e => Some(v(~_end=e, ()))),
      // background
      bg >>= (bg => Some(v(~backgroundColor=bg, ()))),
      // opacity
      opacity >>= (o => Some(v(~opacity=o, ()))),
      // borderWidth
      borderWidth >>= (b => Some(v(~borderWidth=b, ()))),
      borderTopWidth >>= (b => Some(v(~borderTopWidth=b, ()))),
      borderRightWidth >>= (b => Some(v(~borderRightWidth=b, ()))),
      borderBottomWidth >>= (b => Some(v(~borderBottomWidth=b, ()))),
      borderLeftWidth >>= (b => Some(v(~borderLeftWidth=b, ()))),
      borderStartWidth >>= (b => Some(v(~borderStartWidth=b, ()))),
      borderEndWidth >>= (b => Some(v(~borderEndWidth=b, ()))),
      // borderRadius
      borderRadius >>= (b => Some(v(~borderRadius=b, ()))),
      borderTopRightRadius >>= (b => Some(v(~borderTopRightRadius=b, ()))),
      borderTopLeftRadius >>= (b => Some(v(~borderTopLeftRadius=b, ()))),
      borderTopStartRadius >>= (b => Some(v(~borderTopStartRadius=b, ()))),
      borderTopEndRadius >>= (b => Some(v(~borderTopEndRadius=b, ()))),
      borderBottomRightRadius
      >>= (b => Some(v(~borderBottomRightRadius=b, ()))),
      borderBottomLeftRadius
      >>= (b => Some(v(~borderBottomLeftRadius=b, ()))),
      borderBottomStartRadius
      >>= (b => Some(v(~borderBottomStartRadius=b, ()))),
      borderBottomEndRadius >>= (b => Some(v(~borderBottomEndRadius=b, ()))),
      // borderColor
      borderColor >>= (b => Some(v(~borderColor=b, ()))),
      borderTopColor >>= (b => Some(v(~borderTopColor=b, ()))),
      borderRightColor >>= (b => Some(v(~borderRightColor=b, ()))),
      borderBottomColor >>= (b => Some(v(~borderBottomColor=b, ()))),
      borderLeftColor >>= (b => Some(v(~borderLeftColor=b, ()))),
      borderStartColor >>= (b => Some(v(~borderStartColor=b, ()))),
      borderEndColor >>= (b => Some(v(~borderEndColor=b, ()))),
      // overflow
      overflow >>= (o => Some(v(~overflow=o, ()))),
      // zIndex
      zIndex >>= (z => Some(v(~zIndex=z, ()))),
      // direction
      direction >>= (d => Some(v(~direction=d, ()))),
      // rest
      style,
    |]);
  <View style=resolvedStyle>
    {switch (children) {
     | Some(children) => children
     | None => React.null
     }}
  </View>;
};

[@genType]
let default = make;