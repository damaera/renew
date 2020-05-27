import { AppProps } from "next/app";
import { defaultTheme, ThemeProvider, useTheme } from "../components/";

function MyApp({ Component, pageProps }: AppProps) {
  let theme = useTheme();

  return (
    <ThemeProvider value={defaultTheme}>
      <Component {...pageProps} />
    </ThemeProvider>
  );
}

export default MyApp;
