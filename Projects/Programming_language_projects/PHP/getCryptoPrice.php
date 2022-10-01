 <?php
    header("Content-Type: application/json");
    function cryptoPrice($currency)
    {
        $ch = curl_init();

        curl_setopt($ch, CURLOPT_URL, 'https://api.coingecko.com/api/v3/coins/' . $currency . '?localization=false&tickers=false&market_data=true&community_data=false&sparkline=false');
        curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
        curl_setopt($ch, CURLOPT_CUSTOMREQUEST, 'GET');


        $headers = array();
        $headers[] = 'Accept: application/json';
        curl_setopt($ch, CURLOPT_HTTPHEADER, $headers);

        $result = curl_exec($ch);
        if (curl_errno($ch)) {
            echo 'Error:' . curl_error($ch);
        } else {
            return $result;
        }
        curl_close($ch);
    }

    function sendMassage($price)
    {

        $ch = curl_init();

        curl_setopt($ch, CURLOPT_URL, 'https://discord.com/api/webhooks/xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx');
        curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
        curl_setopt($ch, CURLOPT_POST, 1);
        curl_setopt($ch, CURLOPT_POSTFIELDS, '{
        "content": "Solana Price : ' . $price . '  "
      }');

        $headers = array();
        $headers[] = 'Content-Type: application/json';
        curl_setopt($ch, CURLOPT_HTTPHEADER, $headers);

        $result = curl_exec($ch);
        if (curl_errno($ch)) {
            echo 'Error:' . curl_error($ch);
        }
        curl_close($ch);
        print_r($result);
    }

    $a = json_decode(cryptoPrice("solana"), true);
    sendMassage($a['market_data']['current_price']['usd']);
