import { AppProps } from "next/app";
import Theme, { defaultTheme } from "../components/theme/Theme.gen";

function MyApp({ Component, pageProps }: AppProps) {
  return (
    <Theme value={defaultTheme}>
      <Component {...pageProps} />
    </Theme>
  );
}

export default MyApp;
